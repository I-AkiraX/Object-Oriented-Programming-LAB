/*
Assignment operator =
function call operator ()
subscriping operator []
class member access operator ->
*/

#include<iostream>
using namespace std;
class dist{
    int feet,inch;
    public:
    void enterData(){
        cout<<"Enter the feets:  ";
        cin>>feet;
        cout<<"Enter the inches:  ";
        cin>>inch;
    }
    void display(){
        cout<<"\nThe distance = "<<feet<<" feets and "<<inch<<" inches";
    }
    dist operator+(dist d2){
        dist d3;
        d3.inch = inch + d2.inch;
        d3.feet = feet + d2.feet + d3.inch/12;
        d3.inch = d3.inch%12;
        return d3;
    }
};
int main(){
    dist d1,d2,d3;
    cout<<"Enter distance 1--\n";
    d1.enterData();
    cout<<"\nEnter distance 2--\n";
    d2.enterData();
    d3 = d1 + d2;
    d3.display(); 
}

//hackerearth, 