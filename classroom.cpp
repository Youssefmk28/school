#include "classroom.h"

classroom::classroom(){}
classroom::classroom(string cls_name)
{
	ClassName = cls_name;
}
void classroom::Set_ClassName(string cls_name)
{
	ClassName = cls_name;
}
void classroom::Set_Students(vector<student> Sts)
{
	Students = Sts;
}
void classroom::Set_Teachers(vector<teacher> mr_s)
{
	Teachers = mr_s;
}
string classroom::Get_ClassName()
{
	return ClassName;
}
vector<student> classroom::Get_Students()
{
	return Students;
}
vector<teacher> classroom::Get_Teachers()
{
	return Teachers;
}
void classroom::Add_Student(student St)
{
	Students.emplace_back(St);
}
void classroom::Remove_Student(string name)
{
	for (int i = 0; i < Students.size(); i++)
	{
		if (Students[i].Get_Name() == name)
		{
			Students.erase(Students.begin() + i);
			break;
		}
	}
}
void classroom::Add_Teacher(teacher mr)
{
	Teachers.emplace_back(mr);
}
void classroom::Remove_Teacher(string name)
{
	for (int i = 0; i < Teachers.size(); i++)
	{
		if (Teachers[i].Get_Name() == name)
		{
			Teachers.erase(Teachers.begin() + i);
			break;
		}
	}
}
void classroom::Classroom_Display()
{
	cout << endl << 
		"\033[40;32m classroom information: \033[0m" << endl;

	cout << "\033[40;31m Class Name: \033[0m" << "\033[40;34m" << ClassName << "\033[0m" << endl;

	cout << "\033[40;31m Students: \033[0m";

	for (int i = 0; i < Students.size(); i++)
	{
		cout << "\033[40;34m" << Students[i].Get_Name() << "\033[0m";

		if (i != Students.size() - 1)
			cout << "\033[40;35m , \033[0m";
	}
	cout << endl;

	cout << "\033[40;31m Teachers: \033[0m";
	for (int i = 0; i < Teachers.size(); i++)
	{
		cout << "\033[40;34m" << Teachers[i].Get_Name() << "\033[0m";

		if (i != Teachers.size() - 1)
			cout << "\033[40;35m , \033[0m";
	}
	cout << endl;
}
