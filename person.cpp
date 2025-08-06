#include "person.h"
#include <iostream>
using namespace std;
person::person(){}
person::person(string N, string G, string B, int A): Name(N), Gender(G), BirthDate(B), Age(A) {}
void person::Set_Name(string N)
{
	Name = N;
}
void person::Set_Gender(string G)
{
	Gender = G;
}
void person::Set_BirthDate(string B)
{
	BirthDate = B;
}
void person::Set_Age(int A)
{
	Age = A;
}
string person::Get_Name()
{
	return Name;
}
string person::Get_Gender()
{
	return Gender;
}
string person::Get_BirthDate()
{
	return BirthDate;
}
int person::Get_Age()
{
	return Age;
}
void person::input() {
	cout << "Enter Name: ";
	cin >> Name;

	cout << "Enter Gender: ";
	cin >> Gender;

	cout << "Enter BirthDate (Year-Month-Day): ";
	cin >> BirthDate;

	while (true)
	{
	   cout << "Enter age: ";
	   cin >> Age;

	   if (cin.fail())
	    {
		cout << "Invalid input Enter true number ya niga: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    }
	   else 
	    {
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		break;
	    }
        }
}
void person::display()
{
	cout << "\033[40;32m Basic Info: \033[0m" << endl;
	cout << "\033[40;31m Name: \033[0m" << "\033[40;34m" << Name << "\033[0m" << endl;
	cout << "\033[40;31m Gender: \033[0m" << "\033[40;34m" << Gender << "\033[0m" << endl;
	cout << "\033[40;31m BirthDate: \033[0m" << "\033[40;34m" << BirthDate << "\033[0m" << endl;
	cout << "\033[40;31m Age: \033[0m" << "\033[40;34m" << Age << "\033[0m" << endl;

};

