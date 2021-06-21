#include<iostream>
using namespace std;
class employee{
        string name;
        int id;
    protected:
        double salary;
    public:
        void getData(){
            cout<<"Enter the employee name:  ";
            getline(cin,name);
            cout<<"Enter the ID:  ";
            cin>>id;
        }
        void display(){
            cout<<"Salary = "<<salary;
        }
};
class regular:protected employee{
        float bs;
        void calc(){
            salary=0.8*bs+0.1*bs+bs;
            display();
        }
    public:
        void getData(){
            employee::getData();
            cout<<"Enter the basic salary:  ";
            cin>>bs;
            calc();
        }
}r;
class part_time:protected employee{
        float pph,noh;
        void calc(){
            salary=noh*pph*30;
            display();
        }
    public:
        void getData(){
            cout<<"\nEnter the number of hours:  ";
            cin>>noh;
            cout<<"Enter the pay per hour:  ";
            cin>>pph;
            calc();
        }
}p;
int main(){
    r.getData();
    p.getData();
}