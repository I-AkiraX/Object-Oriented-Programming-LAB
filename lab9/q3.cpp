#include<iostream>
using namespace std;
class number{
    protected:
    int val;
    public:
    void setval(int i){
        val=i;
    }
    virtual void show(){}
};
class hextype : public number{
    public:
    void show() {
        cout<<"Hexadecimal = "<<hex<<val<<"\n";
    }
};
class dectype : public number{
    public:
    void show() {
        cout<<"Decimal = "<<val<<"\n";
    }
};
class octtype : public number{
    public:
    void show() {
        cout<<"Octal = "<<oct<<val<<"\n";
    }
};
int main(){
    number *ptr;
    hextype h;
    dectype d;
    octtype o;
    ptr = &d;
    ptr->setval(189);
    ptr->show();
    ptr = &o;
    ptr->setval(189);
    ptr->show();
    ptr = &h;
    ptr->setval(189);
    ptr->show();
}