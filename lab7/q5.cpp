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
            cout<<"\nFor regular--\n";
            display();
        }
    public:
        regular(){
            employee::getData();
            cout<<"\nEnter the basic salary:  ";
            cin>>bs;
            calc();
        }
};
class part_time:protected employee{
        float pph,noh;
        void calc(){
            salary=noh*pph*30;
            cout<<"\nFor part-time--\n";
            display();
        }
    public:
        part_time(){
            cout<<"\n\nEnter the number of hours:  ";
            cin>>noh;
            cout<<"Enter the pay per hour:  ";
            cin>>pph;
            calc();
        }
};
int main(){
    regular r;
    part_time p;
}