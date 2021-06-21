#include<iostream>
using namespace std;
struct stud{
        string name;
        int roll;
        float totmark;
}s[500],temp;
void getData(int n){
    for (int i = 0; i < n; i++){
        cout<<"\nEnter the details of student "<<i+1<<"--\nName:  ";
        cin.ignore(1,'\n');
        getline(cin,s[i].name);
        cout<<"Roll Number:  ";
        cin>>s[i].roll;
        cout<<"Total Marks:  ";
        cin>>s[i].totmark;
    }
}
void sort(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (s[j].totmark<s[j+1].totmark){
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }            
        }           
    }            
}
void display(int n){
    for (int i = 0; i < n; i++){
        cout<<"\n\nName:  "<<s[i].name<<"\nRoll Number:  "<<s[i].roll<<"\nTotal Marks:  "<<s[i].totmark;
    }
}
int main(){
    int n;
    cout<<"Enter the number of students:  ";
    cin>>n;
    getData(n);
    sort(n);
    cout<<"\nDetails of the students after sorting in descending order of their marks are --";
    display(n);
}