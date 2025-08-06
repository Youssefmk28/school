#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "teacher.h"
class classroom 
{
private:
	string ClassName;
	vector <student> Students;
	vector <teacher> Teachers;
public:
	classroom();
	classroom(string cls_name);
	void Set_ClassName(string cls_name);
	void Set_Students(vector <student> Sts);
	void Set_Teachers(vector <teacher> mr_s);
	string Get_ClassName();
	vector <student> Get_Students();
	vector <teacher> Get_Teachers();
	void Add_Student(student St);
	void Remove_Student(string name);
	void Add_Teacher(teacher name);
	void Remove_Teacher(string mr);
	void Classroom_Display();
};

