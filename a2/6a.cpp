#include<iostream>
using namespace std;
class abc{
    int a,b,c;
    public:
    abc(int x, int y,int z) {
        a = x;
        b = y;
        c = z;
    }
    //prefix ++
    abc operator++(){
        ++a;
        ++b;
        ++c;
        return abc(a,b,c);
    }
    //postfix --
    abc operator --(int){
        abc T(a,b,c);
        a--;
        b--;
        c--;
        return T;
    }
    void display(){
        cout<<a<<"  "<<b<<"  "<<c<<"\n";
    }
};
int main(){
    abc t1(1,2,3),t2(5,4,3);
    ++t1;
    t2--;
    t1.display();
    t2.display();
}