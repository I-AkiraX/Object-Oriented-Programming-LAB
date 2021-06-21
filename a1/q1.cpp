#include<iostream>
using namespace std;
class Employee{
    string name,dept;
    int empno;
    double sal;
    public:
    //initialize()
    void initialize(){
        cout<<"Enter the data:\n\nName:  ";
        getline(cin,name);
        cout<<"Department:  ";
        getline(cin,dept);
        cout<<"Employee Number:  ";
        cin>>empno;
        cout<<"Salary:  ";
        cin>>sal;
    }
    //Overloaded initialize()
    void initialize(string n,string d,double s,int e){
        name=n;
        dept=d;
        sal=s;
        empno=e;
    }
    //inline
    inline void printData(){
        cout<<"\n\nName:  "<<name;
        cout<<"\nDepartment:  "<<dept;
        cout<<"\nEmployee name:  "<<empno;
        cout<<"\nSalary:  "<<sal;
    }
};
int main(){
    Employee e1,e2;
    e1.initialize();
    string nam,dep;
    int empn;
    double sa;
    cout<<"Enter the data of second employee:\n\nName:  ";
    cin.ignore(1,'\n');
    getline(cin,nam);
    cout<<"Department:  ";
    getline(cin,dep);
    cout<<"Employee number:  ";
    cin>>empn;
    cout<<"Salary:  ";
    cin>>sa;
    e2.initialize(nam,dep,sa,empn);
    cout<<"Employee 1--";
    e1.printData();
    cout<<"\n\nEmployee 2--";
    e2.printData();
}