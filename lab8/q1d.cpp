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
    friend dist operator+(int,dist);
};
dist operator+(int x,dist d2){
        dist d3;
        d3.inch = x + d2.inch;
        d3.feet = d2.feet + d3.inch/12;
        d3.inch = d3.inch%12;
        return d3;
}
int main(){
    dist d1,d2;int x;
    cout<<"Enter distance 1--\n";
    d1.enterData();
    cout<<"\nEnter a value:  ";
    cin>>x;
    d2 = x + d1;
    d2.display();
}