#include<iostream>
#include<math.h>
using namespace std;
class shape{
    protected:
    float area;
    void display(){
        cout<<"Area = "<<area;
    }
};
class circle:public shape{
    int r;
    void calc(){
        area=3.14*r*r;
        display();
    }
    public:
    void getData(){
        cout<<"For circle--\nEnter the radius:  ";
        cin>>r;
        calc();
    }
}c;
class triangle:public shape{
    int a,b,c,s;
    void calc(){
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        display();
    }
    public:
    void getData(){
        cout<<"\n\nFor triangle--\nEnter side 1:  ";
        cin>>a;
        cout<<"Enter side 2:  ";
        cin>>b;
        cout<<"Enter side 3:  ";
        cin>>c;
        calc();
    }
}t;
class rectangle:public shape{
    int l,w;
    void calc(){
        area=l*w;
        display();
    }
    public:
    void getData(){
        cout<<"\n\nFor rectangle--\nEnter the length:  ";
        cin>>l;
        cout<<"Enter the width:  ";
        cin>>w;
        calc();
    }
}r;
int main(){
    c.getData();
    t.getData();
    r.getData();
}