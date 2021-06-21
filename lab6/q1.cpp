#include<iostream>
using namespace std;
class student{
    string name,course;
    int roll,age;
    public:
    void getData(){
        cout<<"Age:\t";
        cin>>age;
        cin.ignore(1,'\n');
        cout<<"Name:\t";
        getline(cin,name);
        cout<<"Roll:\t";
        cin>>roll;
        cout<<"Course:\t";
        cin.ignore(1,'\n');
        getline(cin,course);
    }
    void printData(){
        cout<<"\nStudent's Data:\n\nName:  "<<name<<"\nRoll:  "<<roll<<"\nAge:  "<<age<<"\nCourse:  "<<course;
    }
};
class Test:public student{
    int marks[5];
    public:
    void getData(){
        student::getData();
        cout<<"Enter the marks in 5 subjects:\n";
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        printData();
    }
    void printData(){
        student::printData();
        for(int i=0;i<5;i++){
            cout<<"\nMark in Sub "<<i+1<<" = "<<marks[i];
        }
    }
}t;
int main(){
    t.getData();
}