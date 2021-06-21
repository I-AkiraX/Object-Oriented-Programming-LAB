#include<iostream>
using namespace std;
int main(){
    char ch;
    string s;
    cout<<"Enter a character:  ";
    getline(cin,s);
    ch=s[0];
    try
    {
        if(s.empty())
        throw 1;
        else if(islower(ch)){

        ch=toupper(ch);
        cout<<ch;
        }
    }
    catch(int)
    {
        cout<<"Blank_Character_Exception\n";
    }
    
}