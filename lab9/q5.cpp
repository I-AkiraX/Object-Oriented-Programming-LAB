#include<iostream>
using namespace std;
class Shape {
    protected:
    float a,b;
    public:
    virtual void show() = 0;
};

class Square: public Shape {
    public:
    void input(){
        cout<<"\nSquare-\nEnter the side:  ";
        cin>>a;
    }
    void show() { 
        cout<<"\nArea of square = "<<a*a;
    }
}s;

class Triangle: public Shape {
   public:
   void input(){
        cout<<"\nTriangle-\nEnter the height:  ";
        cin>>a;
        cout<<"Enter the base:  ";
        cin>>b;
    }
    void show() {
        cout<<"\nArea of triangle = "<<(a*b)/2.0;
    }
}t;

class Circle: public Shape {
   public:
   void input(){
        cout<<"\nCircle-\nEnter the radius:  ";
        cin>>a;
    }
    void show() {
        cout<<"\nArea of circle = "<<3.14*a*a;
    }
}c;

int main() {
    s.input();
    t.input();
    c.input();
    s.show();
    t.show();
    c.show();
}