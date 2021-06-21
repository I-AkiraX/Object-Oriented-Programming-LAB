#include<iostream>
using namespace std;
class time{
    int hr,min,sec;
    public:
    time(int h, int m,int s) {
        hr = h;
        min = m;
        sec = s;
    }
    //prefix ++
    time operator++(){
        ++sec;
        if(sec>=60){
            ++min;
            sec -= 60;
        }
        if(min>=60){
            ++hr;
            min -=60;
        }
        return time(hr,min,sec);
    }
    //postfix ++
    time operator ++(int){
        time T(hr,min,sec);
        ++sec;
        if(sec >= 60){
            ++min;
            sec -= 60;
         }
        if(min >= 60){
            ++hr;
            min -= 60;
        }
        return T;
    }
    //prefix --
    time operator --(){
        --sec;
        if(sec < 0){
            --min;
            sec += 60;
        }
        if(min < 0){
            --hr;
            min +=60;
        }
        return time(hr,min,sec);
    }
    //postfix --
    time operator --(int){
        time T(hr,min,sec);
        --sec;
        if(sec < 0){
            --min;
            sec += 60;
         }
        if(min < 0){
            --hr;
            min += 60;
        }
        return T;
    }
    void display(){
        cout<<hr<<"  "<<min<<"  "<<sec<<"\n";
    }
};
int main(){
    time t1(1,2,0),t2(2,3,59),t3(2,1,0),t4(8,5,2);
    cout<<"Before--\n";
    t1.display();
    t2.display();
    t3.display();
    t4.display();
    t1++;
    ++t2;
    t3--;
    --t4;
    cout<<"After--\n";
    t1.display();
    t2.display();
    t3.display();
    t4.display();
}