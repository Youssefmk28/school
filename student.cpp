#include "student.h"

student::student(){}
student::student(string N, string G, string B, int A,string subs, string clsrm)
{
	subjects.push_back(subs);
	classroom = clsrm;
}
void student::Set_Subjects(vector<string> subs)
{
	subjects = subs;
}
void student::Set_Classroom(string clsrm)
{
	classroom = clsrm;
}
string student::Get_Subjects()
{
	//need to change (very bored)
	string List_Of_Subject = "";
	for (int i = 0; i < subjects.size(); i++)
	{
		List_Of_Subject += subjects[i];
		if (i != subjects.size() - 1)
			List_Of_Subject += ", ";
	}
	return List_Of_Subject;
}
string student::Get_Classroom()
{
	return classroom;
}
void student::Add_Subject(string sub)
{
	subjects.push_back(sub);
}
void student::Remove_Subject(string sub)
{
	// this also bored
	for (int i = 0; i < subjects.size(); i++)
	{
		if (subjects[i] == sub)
		{
			subjects.erase(subjects.begin() + i);
			break;
		}
	}
}
void student::input()
{
	person::input();

	int n;
	cout << "Enter number of subjects: ";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << "Enter subject: ";
		string sub;
		cin >> sub;
		Add_Subject(sub);
	}

	cout << "Enter classroom name: ";
	cin >> classroom;
	cout << endl;
}
void student::display()
{
	person::display();
	cout << "\033[40;32m Side information Of "<< Get_Name() << ": \033[0m" << endl;

	cout << "\033[40;31m the subjects of student:  \033[0m";

	for (int i = 0; i < subjects.size(); i++)
	{
		cout << "\033[40;34m" << subjects[i] << "\033[0m";

		if (i != subjects.size() - 1)
			cout << "\033[40;35m" << " ," << "\033[0m";
		else
			cout << endl;
	}
	cout << "\033[40;31m Classroom: \033[0m" << "\033[40;34m" << classroom << "\033[0m" << endl;
}
