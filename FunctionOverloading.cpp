#include<iostream>
#include<string>
using namespace std;

class Human{
    public: 
    string name;
    int age;
    void getInfo(){
        cout<<"This is the Human Class.\n";
    }
    void getInfo(string name){
        cout<<"Name:"<<name<<"\n";
    }
};

class Print{
public:
void show(int x){
    cout<<"int: "<<x<<"\n";
}
void show(char ch){
    cout<<"char: "<<ch<<"\n";
}   
};

int main(){
    Human h1;
    h1.getInfo();
    h1.getInfo("User");
    Print P1;
    P1.show(2);
    P1.show('b');
    return 0;
}