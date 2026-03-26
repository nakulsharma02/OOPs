#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
void get_info(){
    cout<<"This is the Parent Class\n";
}
virtual void hello(){
    cout<<"Hello from Parent!"<<"/n";
}
};

class Child: public Parent{
    public:
    void get_info(){
        cout<<"This is the Child Class\n";
    }
    void hello(){
        cout<<"Hello From Child!";
    }
};

int main(){
    Child c1;
    c1.get_info();
    c1.hello();
    return 0;
}