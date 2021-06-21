#include<iostream>
using namespace std;
template <typename T>
void findMin(T arr[],int n){
    cout<<"\nEnter the elements-\n";
    for(int i = 0;i < n; i++){
        cin>>arr[i];
    }
    int i;
    T min;
    min=parr[0];
    for(i=0;i<n;i++)
    {
         if(min > arr[i])
        min=arr[i];
    }
    cout<<"Minimum = "<<min;
}
int main(){
    int arri[50];
    float arrf[50];
    int i,f;
    cout<<"Enter the size of the integer array:  ";
    cin>>i;
    findMin(arri,i);
    cout<<"\nEnter the size of the float array:  ";
    cin>>f;
    findMin(arrf,f);
}