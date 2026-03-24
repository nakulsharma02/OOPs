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
    Teacher(){
        cout<<"Hii I am Constructor\n";
    }
    void changeDept(string newDept){
        dept = newDept;
    }
};
int main(){
    Teacher t1;
    Teacher t2;
    t1.name = "Shradha";
    t1.dept = "AI";
    t1.subject = "COA";
    t2.name = "Nakul";
    t2.dept = "Data Analytics";
    t2.subject = "DA";
    cout<<"Teacher Name :"+t1.name + " "<<endl;
    cout<<"Department :"+t1.dept + " "<<endl;
    cout<<"Teacher Name :"+t2.name + " "<<endl;
    cout<<"Department :"+t2.dept + " "<<endl;
    return 0;
}