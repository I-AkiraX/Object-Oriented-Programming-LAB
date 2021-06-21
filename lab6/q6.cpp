#include<iostream>
using namespace std;
class cricketer{
    string name;
    int age,jersey,odi;
    public:
    void getdata(){
        cout<<"Enter the name:  ";
        getline(cin,name);
        cout<<"Enter the age:  ";
        cin>>age;
        cout<<"Enter the jersey number:  ";
        cin>>jersey;
        cout<<"Enter the number of ODIs played:  ";
        cin>>odi;
    }
    void display(){
        cout<<"Name:  "<<name<<"\nAge:  "<<age<<"\nJersey number:  "<<jersey<<"\nNumber of ODIs played:  "<<odi;
    }
};
class batsman: protected cricketer{
    int runs,halfcent,cent;
    float batavg,strike;
    public:
    void getData(){
        getdata();
        cout<<"Enter the number of runs taken:  ";
        cin>>runs;
        cout<<"Enter the batting average:  ";
        cin>>batavg;
        cout<<"Enter the number of half centuries:  ";
        cin>>halfcent;
        cout<<"Enter the number of centuries:  ";
        cin>>cent;
        cout<<"Enter the strike rate:  ";
        cin>>strike;
        cin.ignore(1,'\n');
    }
    void Display(){
        display();
        cout<<"\nRuns taken:  "<<runs<<"\nBatting average:  "<<batavg<<"\nNumber of half-centuries:  "<<halfcent<<"\nNumber of centuries:  "<<cent<<"\nStrike rate:  "<<strike;
    }
}bat;
class baller:protected cricketer{
    string type;
    int wicket;
    float runrate,speed;
    public:
    void getData(){
        getdata();
        cout<<"Enter the type (Pace/Spin):  ";
        cin>>type;
        cout<<"Enter the number of wickets taken:  ";
        cin>>wicket;
        cout<<"Enter the run rate:  ";
        cin>>runrate;
        cout<<"Enter the speed:  ";
        cin>>speed;
    }
    void Display(){
        display();
        cout<<"\nType:  "<<type<<"\nNumber of wickets taken:"<<wicket<<"\nRun rate:  "<<runrate<<"\nSpeed:  "<<speed;
    }
}ball;
int main(){
    cout<<"Enter the details of the batsman--\n";
    bat.getData();
    cout<<"\nEnter the details of the baller--\n";
    ball.getData();
    cout<<"\n\nEntered details of the batsman--\n";
    bat.Display();
    cout<<"\n\nEntered details of the baller--\n";
    ball.Display();
}