#include<iostream>
#include<string>
using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string Subject;
    double salary;
};
class Student{
    public:
    string Branch;
    int rollno;
};
class TA: public Teacher, public Student{
    public:
    string AssistanceId;
    string TeachingSubject;
};
int main(){
    TA t1;
    t1.name = "User";
    t1.dept = "AI";
    t1.Subject = "Maths";
    t1.salary = 34000.0;
    t1.Branch = "CSE";
    t1.rollno = 45555;
    t1.AssistanceId = "twutwhg";
    t1.TeachingSubject = t1.Subject;
    cout<< "Name :" << t1.name << "\n";
    cout<< "Department :" << t1.dept << "\n";
    cout<< "Subject : " << t1.TeachingSubject << " ";
    cout<< "Salary : " << t1.salary << "\n";
    cout<< "Branch : " << t1.Branch << "\n";
    cout<< "Roll No : " << t1.rollno << "\n";
    cout<< "Teacher Id : " << t1.AssistanceId << " ";
    return 0;
}