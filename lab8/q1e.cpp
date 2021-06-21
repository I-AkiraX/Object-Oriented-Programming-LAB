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
    dist operator-(){
        feet = -feet;
        inch = -inch;
    }
};
int main(){
    dist d1,d2;
    cout<<"Enter distance 1--\n";
    d1.enterData();
    cout<<"\nEnter distance 2--\n";
    d2.enterData();
    -d1;
    -d2;
    d1.display();
    d2.display();
}