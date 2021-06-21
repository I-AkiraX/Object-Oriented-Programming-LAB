#include<iostream>
#include<math.h>
using namespace std;
class Deposit{
    float Principal,Roi;
    int Period;
    public:
    void input(){
        cout<<"Enter the principal:  ";
        cin>>Principal;
        cout<<"Enter the rate of interest:  ";
        cin>>Roi;
        cout<<"Enter the period:  ";
        cin>>Period;
        simpleInterest();
        compoundInterest();
    }
    void simpleInterest(){
        cout<<"Simple interest = "<<(Principal*Roi*Period)/100+Principal;
    }
    void compoundInterest();
};
void Deposit::compoundInterest(){
    cout<<"\nCompound interest = "<<Principal*(pow((1+Roi/100),1));
}
int main(){
    Deposit d;
    d.input();
}