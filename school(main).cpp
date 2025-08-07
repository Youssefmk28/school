#include "school.h"
#include "classroom.h"
#include "student.h"
#include "teacher.h"

int main()
{
    student s1;
    s1.Set_Name("joe");
    s1.Set_Gender("Male");
    s1.Set_BirthDate("2008-02-20");
    s1.Set_Age(17);
    s1.Add_Subject("Math");
    s1.Add_Subject("Arabic");
    s1.Set_Classroom("1A");

    student s2;
    s2.Set_Name("Moody");
    s2.Set_Gender("Female");
    s2.Set_BirthDate("2007-09-00");
    s2.Set_Age(5);
    s2.Add_Subject("Noob");
    s2.Add_Subject("Bot");
    s2.Set_Classroom("1A");

    student s3;
    s3.Set_Name("Abdo");
    s3.Set_Gender("Female");
    s3.Set_BirthDate("2019-12-30");
    s3.Set_Age(3);
    s3.Add_Subject("Headache");
    s3.Set_Classroom("1A");
    cout << "Enter info of new student: " << endl;
    student s4;
    s4.input();

    teacher t1;
    t1.Set_Name("Mr.chamber");
    t1.Set_Gender("Male");
    t1.Set_BirthDate("2006-01-20");
    t1.Set_Age(19);
    t1.Set_Specialty("Programing");
    t1.Add_Classrooms("1A");

    teacher t2;
    t2.Set_Name("Mr.Amir");
    t2.Set_Gender("Male");
    t2.Set_BirthDate("2004-01-01");
    t2.Set_Age(21);
    t2.Set_Specialty("Sleeping");
    t2.Add_Classrooms("1A");

    cout << "Enter info of new teacher: " << endl;
    teacher t3;
    t3.input();

    classroom cls("1A");
    cls.Add_Student(s1);
    cls.Add_Student(s2);
    cls.Add_Student(s3);
    cls.Add_Student(s4);
    cls.Add_Teacher(t1);
    cls.Add_Teacher(t2);
    cls.Add_Teacher(t3);

    school myschool("Niga School", "Alex", "1999");
    myschool.Add_Classrooms_To_School(cls);



    myschool.School_Display();

    cout << endl << "=======================================";

    cls.Classroom_Display();

    cout << endl << "=======================================" << endl;

    vector<student> students = cls.Get_Students();
    for (int i = 0; i < students.size(); ++i)
    {
        students[i].display();
        cout << endl << "=======================================" << endl;
    }

    vector<teacher> teachers = cls.Get_Teachers();
    for (int i = 0; i < teachers.size(); ++i)
    {
        teachers[i].display();
        cout << endl << "=======================================" << endl;
    }

    cout << "\033[40;33m" << "GO SLEEP NIGAAAAA" << "\033[0m" << endl;

    return 0;
}
