#include<iostream>
using namespace std;
struct Employee{
    int EmpNo;
    string name,dept;
    float salary;
}e[5];
void Input(struct Employee* emp){
    for(int i=0;i<5;i++){
        cout<<"\nEnter the employee number:  ";
        cin>>emp->EmpNo;
        cin.ignore(1,'\n');
        cout<<"Enter the name:  ";
        getline(cin,emp->name);
        cout<<"Enter the department:  ";
        getline(cin,emp->dept);
        
        cout<<"Enter the salary:  ";
        cin>>emp->salary;
        emp++;
    }
}
void Display(struct Employee* emp){
    for(int i=0;i<5;i++){
        cout<<"\n\nEmployee number:  "<<emp->EmpNo<<"\nName:  "<<emp->name<<"\nDepartment:  "<<emp->dept<<"\nSalary:  "<<emp->salary;
        emp++;
    }
}
void Average(struct Employee* emp){
    float salavg=0.0;
    for(int i=0;i<5;i++){
        salavg+=emp->salary;
        emp++;
    }
    salavg/=5.0;
    cout<<"\n\nAverage salary:  "<<salavg;
}
void Highest(struct Employee* emp){
    struct Employee* max;
    max=emp;
    for(int i=0;i<5;i++){
        emp++;
        if(emp->salary>max->salary)
            max=emp;
    }
    cout<<"\n\nEmployee number:  "<<max->EmpNo<<"\nName:  "<<max->name<<"\nDepartment:  "<<max->dept<<"\nSalary:  "<<max->salary;
}
int main(){
    Input(e);
    Display(e);
    Average(e);
    Highest(e);
}