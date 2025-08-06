#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class person
{
private:
	string Name = "",Gender = "",BirthDate = "";
	string Age;
public:
	person();
	person(string N, string G,string B, string A);
	void Set_Name(string N);
	void Set_Gender(string G);
	void Set_BirthDate(string B);
	void Set_Age(string A);
	string Get_Name();
	string Get_Gender();
	string Get_BirthDate();
	string Get_Age();
	virtual void input();
	virtual void display();
};


