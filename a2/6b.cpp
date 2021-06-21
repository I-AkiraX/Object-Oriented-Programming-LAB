#include<iostream>
using namespace std;
int main(){
    string pass;
    cout<<"Input a password of 6 characters:  ";
    cin>>pass;
    try{
        if(pass.length()<6){
            throw 1;
        }
        if(!isdigit(pass[pass.length()-1])){
            throw 1.1;
        }
    }
    catch(int){
        cout<<"Password must be greater than 6 characters.";
    }
    catch(double){
        cout<<"Password must end with numeric value.";
    }
}