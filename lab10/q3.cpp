#include <iostream>
using namespace std;
template <class T> 
void search(T arr[], int n){
    int flag=0;
    T x;
    cout<<"\nEnter the elements-\n";
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element you want to search:  ";
    cin>>x;
    for (int i = 0; i < n; i++)
        if (arr[i] == x){
            cout << "Element is present at " << i+1<<"\n";
            flag=1;
            break;
        }
    if(flag == 0)
        cout<<"Element not present in array.\n";
}

int main()
{
    int arri[50],i,c,d;
    double arrd[50];
    char arrc[50];
    cout<<"Enter the size of integer array:  ";
    cin>>i;
    search(arri,i);
    cout<<"Enter the size of character array:  ";
    cin>>c;
    search(arrc,c);
    cout<<"Enter the size of double array:  ";
    cin.ignore(1,'\n');
    cin>>d;
    search(arrd,d);
}