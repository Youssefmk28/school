#pragma once
#include "classroom.h"
#include "iostream"
using namespace std;
class school
{
private:
	string SchoolName;
	string SchoolLocation;
	string FoundingDate;
	vector <classroom> classrooms_of_school;
public:
	school();
	school(string sch_name, string Sch_Locate, string FoD);
	void Set_SchoolName(string sch_name);
	void Set_SchoolLocation(string Sch_Locate);
	void Set_FoundingDate(string FoD);
	void Set_Classrooms_OfSchool(vector <classroom> clsrs_sch);
	string Get_SchoolName();
	string Get_SchoolLocation();
	string Get_FoundingDate();
	vector <classroom> Get_Classrooms_Of_School();
	void Add_Classrooms_To_School(classroom clsrs_sch);
	void Remove_Classrooms_For_School(string name);
	void School_Display();
};

