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
    void getInfo(){
        cout<<"Student name : "<<name<<"\n";
        cout<<"Student age : "<<age<<"\n";
        cout<<"Student roll No : "<<age<<"\n";
    }
};
int main(){
    Student s1;
    s1.name = "Nakul";
    s1.age = 23;
    s1.rollno = 3444;
    s1.getInfo();
    return 0;
}