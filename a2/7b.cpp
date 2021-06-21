#include<iostream>
#include<fstream>
using namespace std;
int isSubstring(string s1, string s2){
    int M = s1.length();
    int N = s2.length();
    for (int i = 0; i <= N - M; i++) {
        int j;
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
        if (j == M)
            return i;
    }
    return -1;
}
int main(){
    ofstream fout("test");
    string name,str,check;
    cout<<"enter your name:  ";
    getline(cin,name);
    fout<<name;
    fout.close();
    cout<<"Enter a sub string:  ";
    getline(cin,str);
    ifstream fin("test");
    fin>>check;
    try{
        int res = isSubstring(check,str);
        if(res==-1)
            cout<<"Available\n";
        else
            throw 2;
    }
    catch(...){
        cout<<"Error.\n";
    }
    fin.close();
}