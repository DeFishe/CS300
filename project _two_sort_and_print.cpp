//Showcase of code used to sort and print course info in Project Two
void DSUtils::printCourseList(vector<Course>& courseMasterList)
{
	if (courseMasterList.size() == 0)
	{
		cout << "ERROR: load courses first" << endl;
	}
	else
	{
		std::sort(courseMasterList.begin(), courseMasterList.end());
		cout << "SORTED COURSE LIST" << endl;
		cout << "--------------------------------------------------------------------" << endl;
		for (size_t i = 0; i < courseMasterList.size(); i++)
		{
			cout << courseMasterList.at(i).courseCode << " - " << courseMasterList.at(i).courseTitle;
			cout << " Prerequisites: ";
			if (courseMasterList.at(i).prerequisites.size() == 0)
			{
				cout << "None";
			}
			else
			{
				for (size_t j = 0; j < courseMasterList.at(i).prerequisites.size(); j++)
				{
					cout << courseMasterList.at(i).prerequisites.at(j) << " ";
				}
			}
			cout << endl;
		}
	}
}
