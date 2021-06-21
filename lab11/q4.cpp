#include<iostream>
using namespace std;
int main(){
    int a=2;
    try{
        if(a==1)
            throw a;
        else if(a==2)
            throw 'A';
        else if(a==3)
            throw 4.5;
    }
    catch(int){
        cout<<"\nInteger exception caught.";
    }
    catch(double){
        cout<<"\nDouble exception caught.";
    }
    catch(...){
        cout<<"\nException caught.";
    }
    cout<<"\nEnd of program.";
}