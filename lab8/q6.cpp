#include<iostream>
using namespace std;
class dist{
    int feet,inch;
    public:
    dist(){
        feet = 0;
        inch = 0;
    }
    dist(int f, int i){
        feet = f;
        inch = i;
    }
    dist operator >(const dist &d2){
        dist d3;
        if(feet > d2.feet || (feet==d2.feet&&inch>=d2.inch)){
            d3.feet = feet;
            d3.inch = inch;
            return d3;
        }else{
            d3.feet = d2.feet;
            d3.inch = d2.inch;
            return d3;
        }
    }
    void operator ==(const dist &d){
        if(feet == d.feet && inch == d.inch){
            cout<<"Both distances are equal!\n";
        }else{
            cout<<"Both distances are not equal!\n";
        }
    }
    void display(){
        cout<<"Greater distance = "<<feet<<" feets and "<<inch<<" inches\n";
    }
};
int main(){
    dist d1(3,9),d2(3,12),d3;
    d3 = d1 > d2;
    d1 == d2;
    d3.display();
}