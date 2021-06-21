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
    friend dist operator+(dist,dist);
};
dist operator+(dist d1,dist d2){
    dist d3;
    d3.inch = d1.inch + d2.inch;
    d3.feet = d1.feet + d2.feet + d3.inch/12;
    d3.inch = d3.inch%12;
    return d3;
}
int main(){
    dist d1,d2,d3;
    cout<<"Enter distance 1--\n";
    d1.enterData();
    cout<<"\nEnter distance 2--\n";
    d2.enterData();
    d3 = operator+(d1,d2);
    d3.display();
}