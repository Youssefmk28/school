#pragma once
#include "person.h"
class teacher : public person
{
private:
	string specialty;
	vector <string> classrooms;
public:
    teacher();
    teacher(string N, string G, string B, int A,string spec, string clsrms);
    void Set_Specialty(string spec);
    void Set_Classrooms(vector <string> clsrms);
    string Get_Specialty();
    string Get_Classrooms();
    void Add_Classrooms(string clsrms);
    void Remove_Classrooms(string clsrms);
    void input() override;
    void display() override;
};
