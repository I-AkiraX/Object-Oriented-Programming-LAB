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
    protected:
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
            cout<<marks[i];
        }
    }
    void getTMarks(float *TM){
        int a=0;
        for(int i=0;i<5;i++)
        a+=marks[i];
        *TM=a;
    }
}t;
class Result:public Test{
    float perc,totalM=0;
    void calcPerc(){
        perc=((float)totalM/500.0)*100.0;
    }
    public:
    void calculate(){
        Test::getData();
        getTMarks(&totalM);
        calcPerc();
        printData();
    }
    void printData(){
        Test::printData();
        cout<<"\n\nTotal:\t"<<totalM<<"\nPercentage:\t"<<perc;
    }
}r;
int main(){
    r.calculate();
}