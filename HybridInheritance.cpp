#include<iostream>
#include<string>
using namespace std;
class Person{
public:
string name;
int age;
};
class Teacher: virtual public Person{
double Salary;
public:
string Subject;
};
class Student: virtual public Person{
public:
int RollNo;
string Course;
};
class GradStudent: public Student{
public:
string ResearchArea;
};
class TA: public Teacher, public Student{
public:
double Salary;
};
int main(){
    TA t1;
    GradStudent G1;
    G1.name = "Nakul";
    G1.age = 23;
    G1.RollNo = 2333;
    G1.Course = "DataScience";
    G1.ResearchArea = "AI";
    t1.name = "Rohan";
    t1.age = 24;
    t1.Subject = "DataScience";
    t1.Salary = 3343322;
    t1.RollNo = 1223333;
    t1.Course = "BlockChain";
    cout<<"Name:"<<t1.name<<"\n";
    return 0;
}