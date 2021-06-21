#include<iostream>
using namespace std;
class vector{
        int x,y,z;
    public:
        void createVector(){
            cout<<"x:  ";
            cin>>x;
            cout<<"y:  ";
            cin>>y;
            cout<<"z:  ";
            cin>>z;
        }
        void modify(char ch){
            int n;
            cout<<"\nEnter the new value for the axis "<<ch<<" :  ";
            cin>>n;
            if (ch=='x'){
                x=n;
            }
            else if (ch=='y'){
                y=n;
            }
            else if (ch=='z'){
                z=n;
            }
        }
        void mult(char ch){
            int n;
            cout<<"Enter the value you want to multiply to the axis "<<ch<<" :  ";
            cin>>n;
            if (ch=='x'){
                x*=n;
            }
            else if (ch=='y'){
                y*=n;
            }
            else if (ch=='z'){
                z*=n;
            }
        }
        void multAll(){
            int n;
            cout<<"Enter the value you want to multiply to all the axes:  ";
            cin>>n;
            x*=n;
            y*=n;
            z*=n;
        }
        void display(){
            cout<<"The vector is:  P("<<x<<","<<y<<","<<z<<")";
        }
        void divide(){
            int n;
            cout<<"Enter the value you want to divide to all the axes:  ";
            cin>>n;
            x/=n;
            y/=n;
            z/=n;
        }
        void add(){
            int n;
            cout<<"Enter the value you want to add to all the axes:  ";
            cin>>n;
            x+=n;
            y+=n;
            z+=n;
        }
}v;
int main(){
    char ch;
    int choice;
    cout<<"Enter the axes of the vector--\n";
    v.createVector();
    begin:
    cout<<"\n\nPress:\n1: Modify the value of a given axis.\n2: Multiply by scalar value for a given axis.\n3: Multiply by scalar value for all axes.\n4: Divide by scalar value for all axes.\n5: Add by scalar value for all axes.\n6: Display the vector.\n7: Exit\nEnter your choice:  ";
    cin>>choice;
    if(choice<1||choice>7){
        cout<<"\nWrong choice! Enter again.";
        goto begin;
    }
    switch (choice){
        case 1:
            mod:
            cout<<"\nEnter the axis whose value you want to modify:  ";
            cin>>ch;
            if(ch!='x'&&ch!='y'&&ch!='z'){
                cout<<"Wrong input! Axis can be either x, y or z. Please enter a valid axis.";
                goto mod;
            }
            v.modify(ch);
            cout<<"\nModified successfully!";
            goto begin;
            break;
        case 2:
            mul:
            cout<<"\nEnter the axis whose value you want to multiply with a scalar:  ";
            cin>>ch;
            if(ch!='x'&&ch!='y'&&ch!='z'){
                cout<<"Wrong input! Axis can be either x, y or z. Please enter a valid axis.";
                goto mul;
            }
            v.mult(ch);
            cout<<"\nMultiplied successfully!";
            goto begin;
            break;
        case 3:
            v.multAll();
            cout<<"\nMultiplied successfully!";
            goto begin;
            break;
        case 4:
            v.divide();
            cout<<"\nDivided successfully!";
            goto begin;
            break;
        case 5:
            v.add();
            cout<<"Added successfully!";
            goto begin;
            break;
        case 6:
            v.display();
            goto begin;
            break;
        case 7:
            exit(0);
    }
    
}