#include "school.h"

school::school(){}
school::school(string sch_name, string Sch_Locate, string FoD)
{
	SchoolName = sch_name;
	SchoolLocation = Sch_Locate;
	FoundingDate = FoD;
}
void school::Set_SchoolName(string sch_name)
{
	SchoolName = sch_name;
}
void school::Set_SchoolLocation(string Sch_Locate)
{
	SchoolLocation = Sch_Locate;
}
void school::Set_FoundingDate(string FoD)
{
	FoundingDate = FoD;
}
void school::Set_Classrooms_OfSchool(vector<classroom> clsrs_sch)
{
	classrooms_of_school = clsrs_sch;
}
string school::Get_SchoolName()
{
	return SchoolName;
}
string school::Get_SchoolLocation()
{
	return SchoolLocation;
}
string school::Get_FoundingDate()
{
	return FoundingDate;
}
vector<classroom> school::Get_Classrooms_Of_School()
{
	return classrooms_of_school;
}
void school::Add_Classrooms_To_School(classroom clsrs_sch)
{
	classrooms_of_school.emplace_back(clsrs_sch);
}
void school::Remove_Classrooms_For_School(string name)
{
	for (int i = 0; i < classrooms_of_school.size(); i++)
	{
		if (classrooms_of_school[i].Get_ClassName() == name)
		{
			classrooms_of_school.erase(classrooms_of_school.begin() + i);
			break;
		}
	}
}
void school::School_Display()
{
	cout << "\033[40;32m School Info: \033[0m" << endl;

	cout << "\033[40;31m School Name: \033[0m" << "\033[40;34m" << SchoolName << "\033[0m" << endl;

	cout << "\033[40;31m School Location: \033[0m" << "\033[40;34m" << SchoolLocation << "\033[0m" << endl;

	cout << "\033[40;31m Founding Date: \033[0m" << "\033[40;34m" << FoundingDate << "\033[0m" << endl;

	cout << "\033[40;31m Classrooms in School: \033[0m" ;

	for (int i = 0; i < classrooms_of_school.size(); i++)
	{
		cout << "\033[40;34m" << classrooms_of_school[i].Get_ClassName() << "\033[0m";
		if (i != classrooms_of_school.size() - 1)
			cout << "\033[40;35m , \033[0m";
	}
	cout << endl;
}
