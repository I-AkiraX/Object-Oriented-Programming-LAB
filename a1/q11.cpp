#include<iostream>
#include<iomanip>
using namespace std;
class item{
		string code,name;
		float price;
		int qty;
	public:
		void store(){
				cout<<"Code:  ";
				getline(cin,code);
				cout<<"Name:  ";
				getline(cin,name);
				cout<<"Price:  ";
				cin>>price;
				cout<<"Quantity:  ";
				cin>>qty;
				cin.ignore(1,'\n');
		}
		float calc(){
				return price*qty;
		}
		void display(int i){
				cout<<left<<setw(8)<<i+1<<setw(10)<<code<<setw(25)<<name<<setw(10)<<price<<setw(8)<<qty <<right<<setw(10)<<price*qty<<"\n";
		}
}i[10];
int main(){
		float sum=0;
		for(int j=0;j<10;j++){
				cout<<"Enter the details of item "<<j+1<<"--\n";
				i[j].store();
				sum+=i[j].calc();
		}
		cout<<"\n\n";
		cout<<left<<setw(8)<<"Sl. No."<<setw(10)<<"Code"<<setw(25)<<"Name"<<setw(10)<<"Price"<<setw(8)<<"Quantity" <<setw(10)<<right<<"Total"<<"\n";
		for(int k=0;k<71;k++)
				cout<<"-";
		cout<<"\n";
		for(int l=0;l<10;l++){
				i[l].display(l);
		}
		for(int k=0;k<71;k++)
				cout<<"-";
		cout<<"\n";
		cout<<setw(65)<<"Total = Rs."<<sum<<"/-";
}