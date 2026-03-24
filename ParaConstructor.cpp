#include<iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
    string name;
    string dept;
    string subject;
    Teacher(string name, string dept, string Subject, double Salary){
        cout<<"Hii I am Constructor\n";
        this->name = name;
        this->dept = dept;
        this->subject = Subject;
        this->salary = Salary;
    }
    void changeDept(string newDept){
        dept = newDept;
    }
};
int main(){
    Teacher t1("Nakul","AI","Maths",30000.0);
    Teacher t2("Suraj","DS","DBMS",40000.0);
    cout<<"Teacher Name :"+t1.name + " "<<endl;
    cout<<"Department :"+t1.dept + " "<<endl;
    cout<<"Teacher Name :"+t2.name + " "<<endl;
    cout<<"Department :"+t2.dept + " "<<endl;
    return 0;
}