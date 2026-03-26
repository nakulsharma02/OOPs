#include <iostream>
#include <string>
using namespace std;

class Shape{ //Abstract Class
public:
virtual void draw() = 0; // Pure Virtual Function
};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"Drawing a Circle!\n";
    }
};

int main(){
    Circle c1;
    c1.draw();
    return 0;
}