#include <iostream>
#include <string>
using namespace std;

class Parent{
public:
void get_show(){
    cout<<"This is the Parent Class\n";
}
};

class Child: public Parent{
    public:
    void get_show(){
        cout<<"This is the Child Class\n";
    }
};

int main(){
    Child c1;
    c1.get_show();
    return 0;
}