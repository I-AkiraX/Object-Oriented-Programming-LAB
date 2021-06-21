#include <iostream>
using namespace std;
#define SIZE 50
template <class T>
class stack{
    T *arr;
    int top;
    int capacity;
    public:
    stack(int size = SIZE){
        arr = new T[size];
        capacity = size;
        top = -1;
    }
    void push(T x){
        if (top == capacity-1){
            cout << "OverFlow\nProgram Terminated\n";
            exit(0);
        }
        cout << "Inserting " << x << endl;
        arr[++top] = x;
        display();
    }
    void pop(){
        if (top==-1)	{
        cout << "UnderFlow\nProgram Terminated\n";
        exit(0);
        }
        cout << "Removing " << arr[top] << endl;
        arr[top--];
        display();
    }
    void display(){
        if(top == -1){
            cout<<"\nList is empty!\n";
        }
        else{
            cout<<"List is-\n";
            for(int i=0;i<=top;i++)
                cout<<arr[i]<<"  ";
            cout<<"\n";
        }
    }
    ~stack(){
        delete[] arr;
    }
};
int main(){
    stack <char> pt;
    pt.push('A');
    pt.push('B');
    pt.pop();
    pt.push('C');

    stack <int> pt1;
    pt1.push(1);
    pt1.push(2);
    pt1.pop();
    pt1.push(3);

    stack <float> pt2;
    pt2.push(1.2);
    pt2.push(2.3);
    pt2.pop();
    pt2.push(3.4);
}