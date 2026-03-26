#include <iostream>
#include <string>
using namespace std;
// Polymorphism : Many Forms
class Student{
public:
string name;
Student(){
    cout<<"Non-parameterized"<<"\n";
}
Student(string name){
    this->name = name;
    cout<<"Parameterized \n";
}
};
int main(){
    Student s1;
    Student s2("Nakul");
    cout<<"Name:"<<s2.name<<"\n";
    return 0;
}