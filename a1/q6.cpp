#include<iostream>
using namespace std;
class date{
    int m,y,d;
    public:
    void getDate(){
        cout<<"Year:  ";
        cin>>y;
        cout<<"Month:  ";
        cin>>m;
        cout<<"Date:  ";
        cin>>d;
    }
    int difference(date d){
        return y-d.y;
    }
};
class Emp{
    string name,empl_id,designation,address;
    double salary;
    date dob;
    int age;
    public:
    Emp(){
        assign();
        display();
    }
    void assign(){
        date cd;
        cout<<"\n\nCurrent Date--\n";
        cd.getDate();
        cout<<"\nName:  ";
        cin.ignore(1,'\n');
        getline(cin,name);
        cout<<"\n\nBirth Date--\n";
        dob.getDate();
        age=cd.difference(dob);
        cin.ignore(1,'\n');
        cout<<"\nEmployee id:  ";
        getline(cin,empl_id);
        cout<<"\nDesignation:  ";
        getline(cin,designation);
        cout<<"\nAddress:  ";
        getline(cin,address);
        cout<<"\nSalary:  ";
        cin>>salary;
    }
    void display(){
        cout<<"\n\nDetails--\n\nName:\t"<<name<<"\nAge:\t"<<age<<"\nDesignation:\t"<<designation;
    }
};
int main(){
    Emp e;
}