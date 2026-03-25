#include<iostream>
#include<string>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student: public Person{
    public:
    int rollno;
};
class GradStudent: public Student{
    public:
    string researchArea;
};
int main(){
    GradStudent G1;
    G1.name = "Nakul";
    G1.age = 23;
    G1.rollno = 344;
    G1.researchArea = "AI";
    cout<<"Graduate Student Name :"<<G1.name<<"\n";
    cout<<"Graduate Student Age :"<<G1.age<<"\n";
    cout<<"Graduate Student Roll No :"<<G1.rollno<<"\n";
    cout<<"Graduate Student Research Area :"<<G1.researchArea<<"\n";
    return 0;
}