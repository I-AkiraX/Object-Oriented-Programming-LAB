#include<iostream>
using namespace std;
template <typename T,int n>
class array{
    T arr[n];
    public:
    void input(){
        cout<<"Enter the elements-\n";
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bubbleSort();
    }
    void swap(T &a,T &b){
        T temp=a;
        a=b;
        b=temp;
    }
    void bubbleSort() {
        for (int i = 0; i < n - 1; i++)
            for (int j = n - 1; i < j; j--)
                if (arr[j] < arr[j - 1])
                    swap(arr[j], arr[j - 1]);
        display();
    }
    void display(){
        cout<<"After sorting-\n";
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"  ";
    }
};
int main(){
    array <int,6> arri;
    arri.input();
}