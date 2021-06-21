#include <iostream>
using namespace std;
template <class T>
class set{
public:
    void display(T a[], T b[], int m, int n){
        if (m > n){
            T *temp = a;
            a = b;
            b = temp;

            int t = m;
            m = n;
            n = t;
        }
        for (int i = 0; i < m; i++)
            cout << a[i] << " ";
        for (int i = 0; i < n; i++)
            if (search(a, 0, m - 1, b[i]) == -1)
                cout << b[i] << " ";
    }
    int search(T a[], int l, int r, int x){
        if (r >= l){
            int mid = l + (r - l) / 2;
            if (a[mid] == x)
                return mid;
            if (a[mid] > x)
                return search(a, l, mid - 1, x);
            return search(a, mid + 1, r, x);
        }
        return -1;
    }
};
int main(){
    set<int> arr;
    int a[] = {0, 6, 9};
    int b[] = {5, 6, 7, 9, 10};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    cout << "Union of two arrays is \n";
    arr.display(a, b, m, n);
}