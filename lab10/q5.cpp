#include<iostream>
using namespace std;
template <class T>
class add{
    T a,b;
    public:
    void input(){
        cout<<"Enter 2 values:  \n";
        cin>>a>>b;
        cout<<"Sum = "<<a+b;
    }
};
int main(){
    add <int> ob;
    add <float> ob1;
    ob.input();
    ob1.input();
}

/*#include<iostream>
using namespace std;
template <class T>
class add{
    public:
    T sum(T a,T b){
        return a+b;
    }
};
int main(){
    add <int> ob;
    add <float> ob1;
    add <double> ob2;
	cout << "Sum : " << ob.sum(3, 5) << endl;
	cout << "Sum : " << ob1.sum(3.0, 5.2) << endl;
	cout << "Sum : " << ob2.sum(3.24234, 5.24144) << endl;
}*/