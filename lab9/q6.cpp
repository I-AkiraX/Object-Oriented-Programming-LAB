#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    int id;
    float salary;
    public:
    virtual void input(){
        cout<<"\nName:  ";
        getline(cin,name);
        cout<<"ID:  ";
        cin>>id;
    }
    virtual void display(){
        cout<<"Name:  "<<name<<"\nID:  "<<id<<"\nSalary:  "<<salary;
    }
    virtual void totalsal(){}
};
class reg:public employee{
    float basic,hra,da;
    public:
    void input(){
        employee::input();
        cout<<"Enter the basic salary:  ";
        cin>>basic;
        cin.ignore(1,'\n');
        hra=0.1*basic;
        da=0.8*basic;
        totalsal();
    }
    void totalsal(){
        salary = basic + hra + da;
    }
};
class par:public employee{
    float pph;
    int noh;
    public:
    void input(){
        employee::input();
        cout<<"Enter the no of hours:  ";
        cin>>noh;
        cout<<"Enter the pay per hour:  ";
        cin>>pph;
        totalsal();
    }
    void totalsal(){
        salary = noh*pph*30;
    }
};
int main(){
    employee *e;
    reg r;
    par p;
    e=&r;
    e->input();
    e->display();
    e=&p;
    e->input();
    e->display();
}