#include<iostream>
using namespace std;
class complex{
    int real,img;
    public:
    complex(){
        real = 0;
        img = 0;
    }
    complex(int r,int i){
        real = r;
        img = i;
    }
    complex operator +(complex c2){
        complex c3;
        c3.real = real+c2.real;
        c3.img = img+c2.img;
        return c3;
    }
    void operator == (complex c2){
        if(real == c2.real && img == c2.img){
            cout<<"Both numbers are equal!\n";
        }else{
            cout<<"Both numbers are not equal!\n";
        }
    }
    complex operator =(const complex &c){
        real = c.real;
        img = c.img;
        return *this;
    }
    void display(){
        cout<<real<<" + "<<img<<"i\n";
    }
};
int main(){
    complex c1(2,3),c2(2,3),c3;
    c3 = c1 + c2;
    c1 == c2;
    c1.display();
    c2.display();
    c3.display();
}