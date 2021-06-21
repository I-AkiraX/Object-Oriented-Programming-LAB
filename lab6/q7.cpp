#include<iostream>
using namespace std;
class batsman{
    int runs,halfcent,cent;
    float batavg,strike;
    public:
    void getData(){
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
        cout<<"\nRuns taken:  "<<runs<<"\nBatting average:  "<<batavg<<"\nNumber of half-centuries:  "<<halfcent<<"\nNumber of centuries:  "<<cent<<"\nStrike rate:  "<<strike;
    }
};
class baller{
    string type;
    int wicket;
    float runrate,speed;
    public:
    void getData(){
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
        cout<<"\nType:  "<<type<<"\nNumber of wickets taken:"<<wicket<<"\nRun rate:  "<<runrate<<"\nSpeed:  "<<speed;
    }
};
class allrounder:protected batsman,protected baller{
    int manOfMatch,interMatch,catches,iccRank,stylish;
    public:
    void getdata(){
        cout<<"Enter the details--\n";
        batsman::getData();
        baller::getData();
        cout<<"Enter the number of man of the match cups won:  ";
        cin>>manOfMatch;
        cout<<"Enter the number of international matches played:  ";
        cin>>interMatch;
        cout<<"Enter the number of catches taken:  ";
        cin>>catches;
        cout<<"Enter the ICC ranking:  ";
        cin>>iccRank;
        cout<<"Enter the number of stylish player of the match cups won:  ";
        cin>>stylish;
    }
    void display(){
        cout<<"\n\nEntered details are--\n";
        batsman::Display();
        baller::Display();
        cout<<"\nNumber of man of the match cups:  "<<manOfMatch<<"\nNumber of international matches played:  "<<interMatch<<"\nNumber of catches taken:  "<<catches<<"\nICC Rank:  "<<iccRank<<"\nNumber of stylish player of the match cups:  "<<stylish;
    }
}a;
int main(){
    a.getdata();
    a.display();
}