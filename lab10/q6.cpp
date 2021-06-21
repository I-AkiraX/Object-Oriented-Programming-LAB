#include<iostream>
using namespace std;
template <class T>
class vector{
    T *v,x;
    int size;
    public:
    void create(int m){
        v= new T [size =m];
        cout<<"Enter the elements-\n";
        for(int i=0; i<size; i++)
            cin>>v[i];
        display();
    }
    void modify(){
        int pos,i=0;
        cout<<"Enter the position:  ";
        cin>>pos;
        while(i+1<pos){
            i++;
        }
        cout<<"Enter new value:  ";
        cin>>x;
        v[i]=x;
        display();
    }
    void multiply(){
        cout<<"\nEnter the scalar value:  ";
        cin>>x;
        for(int i=0; i<size; i++)
            v[i]*=x;
            display();
    }
    void display(){
        cout<<"\nThe elements-\n(";
        for(int i=0; i<size-1; i++)
            cout<<v[i]<<", ";
        cout<<v[size-1]<<" )\n";
    }
};
int main(){
    vector <int> obj;
    int n;
    cout<<"Enter the size:  ";
    cin>>n;
    obj.create(n);
    obj.modify();
    obj.multiply();
}