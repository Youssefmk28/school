#include "teacher.h"

teacher::teacher(){}
teacher::teacher(string N, string G, string B, int A,string spec, string clsrms)
{
	specialty = spec;
	classrooms.push_back(clsrms);
}
void teacher::Set_Specialty(string spec)
{
	specialty = spec;
}
void teacher::Set_Classrooms(vector<string> clsrms)
{
	classrooms = clsrms;
}
string teacher::Get_Specialty()
{
	return specialty;
}
string teacher::Get_Classrooms()
{
	string List_Of_Classrooms = "";
	for (int i = 0; i < classrooms.size(); i++)
	{
		List_Of_Classrooms += classrooms[i];
		if (i != classrooms.size() - 1)
			List_Of_Classrooms += ", ";
	}
	return List_Of_Classrooms;
}
void teacher::Add_Classrooms(string clsrms)
{
	classrooms.push_back(clsrms);
}
void teacher::Remove_Classrooms(string clsrms)
{
	for (int i = 0; i < classrooms.size(); i++)
	{
		if (classrooms[i] == clsrms)
		{
			classrooms.erase(classrooms.begin() + i);
			break;
		}
	}
}
void teacher::input()
{
	person::input();

	cout << "Enter Specialty: ";
	cin >> specialty;
	int n;
	cout << "Enter number of classrooms: ";
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter classrooms: ";
		string clsrms;
		cin >> clsrms;
		Add_Classrooms(clsrms);
	}
	cout << endl;
}
void teacher:: display()
{
	person::display();
	cout << "\033[40;32m Side informationOf " << Get_Name() << ": \033[0m" << endl;

	cout << "\033[40;31m specialty: \033[0m" << "\033[40;34m" << specialty << "\033[0m" << endl;

	cout << "\033[40;31m the classrooms of teacher:  \033[0m";
	for (int i = 0; i < classrooms.size(); i++)
	{
		cout << "\033[40;34m" << classrooms[i] << "\033[0m";
		if (i != classrooms.size() - 1)
			cout << "\033[40;35m" << " ," << "\033[0m";
	}
	cout << endl;
}
