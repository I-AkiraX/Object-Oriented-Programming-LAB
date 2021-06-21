#include<iostream>

using namespace std;

template <typename T>
void swap(T *a,T *b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    int x1=4,y1=7;
    float x2=4.5,y2=7.5;
    char x3='a',y3='b';
    cout<<"Before Swap:\nx1 = "<<x1<<"  y1 = "<<y1<<"\nx2 = "<<x2<<"  y2 = "<<y2<<"\nx3 = "<<x3<<"  y2 = "<<y3;
    swap(x1,y1);
    swap(x2,y2);
    swap(x3,y3);
    cout<<"\nAfter Swap:\nx1 = "<<x1<<"  y1 = "<<y1<<"\nx2 = "<<x2<<"  y2 = "<<y2<<"\nx3 = "<<x3<<"  y2 = "<<y3;
}