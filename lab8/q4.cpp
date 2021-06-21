#include<iostream>
#include<string.h>
using namespace std;
class str{
    int len;
    char *st;
    public:
    str(){
        len = 0;
        st=new char[1];
    }
    str(char *s){
        len = strlen(s);
        st = new char[len+1];
        strcpy(st,s);
    }
    str operator +(str &s){
        str a;
        a.len = len + s.len;
        delete(a.st);
        a.st = new char[a.len+1];
        strcpy(a.st,st);
        strcat(a.st,s.st);
        return a;
    }
    str operator =(const str &s){
        delete(st);
        len = s.len;
        st = new char[s.len + 1];
        strcpy(st,s.st);
        return *this;
    }
    void display(){
        cout<<st<<"\n";
    }
};
int main(){
    str s1="Hello ",s2="world!",s3;
    s3 = s1+s2;
    s1.display();
    s2.display();
    s3.display();
}