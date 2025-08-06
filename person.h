#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;
class person
{
private:
	string Name = "",Gender = "",BirthDate = "";
	int Age = 0;
public:
	person();
	person(string N, string G,string B, int A);
	void Set_Name(string N);
	void Set_Gender(string G);
	void Set_BirthDate(string B);
	void Set_Age(int A);
	string Get_Name();
	string Get_Gender();
	string Get_BirthDate();
	int Get_Age();
	virtual void input();
	virtual void display();
};


