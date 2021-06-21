#include<iostream>
using namespace std;
class media{
    protected:
    string title;
    float price;
    public:
    media(string s,float a){
        title = s;
        price = a;
    }
    virtual void display(){}
};
class book:public media{
    int pgs;
    public:
    book(string s, float a,int p):media(s,a){
        pgs = p;
    }
    void display(){
        cout<<"\nTitle:  "<<title<<"\nPages:  "<<pgs<<"\nPrice:  "<<price<<" rupees\n";
    }
};
class tape:public media{
    float time;
    public:
    tape(string s,float a, float t):media(s,a){
        time = t;
    }
    void display(){
        cout<<"\nTitle:  "<<title<<"\nTime:  "<<time<<" s\nPrice:  "<<price<<" rupees";
    }
};
int main(){
    book b("story of",220,150);
    tape t("life",110,3600);
    b.display();
    t.display();
}