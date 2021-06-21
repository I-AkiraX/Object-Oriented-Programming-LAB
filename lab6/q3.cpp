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
        cout<<"\nStudent's Data:\n\nName:\t"<<name<<"\nRoll:\t"<<roll<<"\nAge:\t"<<age<<"\nCourse:\t"<<course;
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
    }
    void printData(){
        student::printData();
        for(int i=0;i<5;i++){
            cout<<"\nMark in Sub "<<i+1<<" = "<<marks[i];
        }
    }
    void getTMarks(float *TM){
        int a=0;
        for(int i=0;i<5;i++)
        a+=marks[i];
        *TM=a;
    }
};
class Activities:public student{
    int act[2];
    public:
    void getData(){
        cout<<"Enter the marks in 2 activities:\n";
        cin>>act[0]>>act[1];
    }
    void printData(){
        for(int i=0;i<2;i++){
            cout<<"\nMark in Activity "<<i+1<<" = "<<act[i];
        }
    }
    void getTMarks(float *TM){
        int a=0;
        for(int i=0;i<2;i++)
        a+=act[i];
        *TM+=a;
    }
};
class Result:public Test,public Activities{
    float perc,totalM=0;
    void calcPerc(){
        perc=((float)totalM/700.0)*100.0;
    }
    public:
    void calculate(){
        Test::getData();
        Activities::getData();
        Test::getTMarks(&totalM);
        Activities::getTMarks(&totalM);
        calcPerc();
        printData();
    }
    void printData(){
        Test::printData();
        Activities::printData();
        cout<<"\n\nTotal:\t"<<totalM<<"\nPercentage:\t"<<perc;
    }
}r;
int main(){
    r.calculate();
}