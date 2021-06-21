#include <iostream>
using namespace std;
int main(){
    int x[5];
    try{
        for(int i=0;i<10;i++){
            if(i<5)
                x[i]=i;
            else
                throw 1;
        }
    }
    catch(int){
        cout<<"Exception occured\n";
    }
}