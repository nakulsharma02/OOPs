// There are two types of Copy Connstructor - Shallow and deep
// Shallow Constructor - Default Constructor 
// It is failed when we allocate a memory for a variable Dynamically for ex use a pointer
#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    double *cgpaPtr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"cgpa: "<<*cgpaPtr<<endl;
    }

};
int main(){
    Student s1("rahul kumar",8.9);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    return 0;
}