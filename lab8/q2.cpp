#include<iostream>
using namespace std;
class array{
    int *arr,len;
    public:
    void getSize(int size){
        len = size;
    }
    friend istream & operator>>(istream &,array &);
    friend ostream & operator<<(ostream &,const array &);
};
istream & operator>>(istream &in,array &x){
    for(int i=0;i<x.len;i++){
        in>>x.arr[i];
    }
    return in;
}
ostream & operator<<(ostream &out,const array&x){
    cout<<"Array elements--\n";
    for(int i=0;i<x.len;i++){
        out<<x.arr[i]<<"  ";
    }
}
int main(){
    array a1; int size;
    cout<<"Enter the size of array:  ";
    cin>>size;
    a1.getSize(size);
    cout<<"Enter the elements--\n";
    cin>>a1;
    cout<<a1;
}