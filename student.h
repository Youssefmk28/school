#pragma once
#include "person.h"
class student : public person
{
private:
    vector <string> subjects;
    string classroom;
public:
    student();
    student(string N, string G, string B, int A,string subs,string clsrm);
    void Set_Subjects(vector <string> subs);
    void Set_Classroom(string clsrm);
    string Get_Subjects();
    string Get_Classroom();
    void Add_Subject(string sub);
    void Remove_Subject(string sub);
    void input() override;
    void display() override;
};

