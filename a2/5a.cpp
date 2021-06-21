#include<iostream>
using namespace std;
class Student{
    protected:
    string Name,Section;
    int Roll_No,Age;
    public:
    void input(){
        cout<<"Enter the name:  ";
        getline(cin,Name);
        cout<<"Enter the section:  ";
        cin>>Section;
        cout<<"Roll number:  ";
        cin>>Roll_No;
        cout<<"Enter the age:  ";
        cin>>Age;
    }
};
class Mark:private Student{
    protected:
    float mark[3];
    public:
    void input(){
        Student::input();
        cout<<"Enter the marks of 3 subjects--\n";
        cin>>mark[0]>>mark[1]>>mark[2];
    }
    void display(){
        cout<<"Name-  "<<Name<<"\nSection-  "<<Section<<"\nRoll number-  "<<Roll_No<<"\nAge-  "<<Age<<"\nMarks in 3 subject--\n";
        for(int i=0;i<3;i++)
        cout<<mark[i]<<"\n";
    }
};
class Elective:private Student{
    protected:
    float emark[2];
    public:
    void input(){
        cout<<"Enter the marks of 2 elective subjects--\n";
        cin>>emark[0]>>emark[1];
        cin.ignore(1,'\n');
    }
};
class Result:private Mark,private Elective{
    float total_mark,avg_mark;
    void calc(){
        total_mark = mark[0]+mark[1]+mark[2]+emark[0]+emark[1];
        avg_mark = total_mark/5;
    }
    public:
    void input(){
        Mark::input();
        Elective::input();
    }
    void display(){
        calc();
        Mark::display();
        cout<<"\nMark in 2 elective subject--\n";
        for(int i=0;i<2;i++)
        cout<<emark[i]<<"\n";
        cout<<"\nTotal marks-  "<<total_mark<<"\nAverage mark-  "<<avg_mark;
    }
};
int main(){
    Result r[5];
    for(int i=0;i<3;i++){
        cout<<"Student "<<i+1<<"--\n";
        r[i].input();
    }
    for(int i=0;i<3;i++){
        cout<<"\n\nStudent "<<i+1<<"--\n";
        r[i].display();
    }
}