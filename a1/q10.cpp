#include<iostream>
using namespace std;
struct stud{
    string name;
    int roll;
    float marks[6],total=0,avg;
}s[500],temp;
void getdata(int n){
    for (int i = 0; i < n; i++){
        cin.ignore(1,'\n');
        cout<<"\nEnter the details of student "<<i+1<<"--\nName:  ";
        getline(cin,s[i].name);
        cout<<"Roll Number:  ";
        cin>>s[i].roll;
        cout<<"Marks in 6 subjects--\n";
        for(int j=0;j<6;j++){
            cout<<"Subject "<<j+1<<":  ";
            cin>>s[i].marks[j];
        }
    }
}
void avg(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++)
            s[i].total+=s[i].marks[j];
        s[i].avg=s[i].total/6;
    }
}
float avgAll(int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i].avg;
    }
    return sum/=n;
}
int aboveAvg(float sum,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i].avg>sum)
            c++;
    }
    return c;
}
int belowAvg(float sum,int n){
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i].avg<sum)
            c++;
    }
    return c;
}
void sort(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            if (s[j].total>s[j+1].total){
                temp=s[j+1];
                s[j+1]=s[j];
                s[j]=temp;
            }            
        }           
    }            
}
void display(int n){
    cout<<"\nThe name of the student secured highest marks is "<<s[n-1].name<<"\nThe roll number of the student secured highest mark from bottom is "<<s[0].roll;
}
int main(){
    int n,above,below;
    float sum;
    cout<<"Enter the number of students:  ";
    cin>>n;
    getdata(n);
    avg(n);
    sum=avgAll(n);
    above=aboveAvg(sum,n);
    below=belowAvg(sum,n);
    sort(n);
    display(n);
}