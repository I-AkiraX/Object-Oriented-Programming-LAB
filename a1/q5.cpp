#include<iostream>
using namespace std;
class student{
        int roll;
        string name;
        char gr;
        float marks[6],total=0;
    public:
        student(string Name,int Roll,float Marks[6]){
            name=Name;
            roll=Roll;
            for (int i=0;i<6;i++)
                marks[i]=Marks[i];
        }
        void calc(){
            for(int i=0;i<6;i++)
                total+=marks[i];
        }
        void grade(){
            calc();
            float perc=(total/600)*100;
            if(perc>=90)
                gr='O';
            else if(perc>=80)
                gr='E';
            else if(perc>=70)
                gr='A';
            else if(perc>=60)
                gr='B';
            else if(perc>=50)
                gr='C';
            else
                gr='D';
            cout<<"The student's grade is "<<gr<<".\n";
        }
};
int main(){
    string name;
    int roll;
    float marks[6];
    cout<<"Enter the name of the student:  ";
    getline(cin,name);
    cout<<"Enter the roll number of the students:  ";
    cin>>roll;
    cout<<"Enter the marks in 6 subjects--\n";
    for(int i=0;i<6;i++){
        cout<<"Subject "<<i+1<<" :  ";
        cin>>marks[i];
    }
    student s(name,roll,marks);
    s.grade();
}