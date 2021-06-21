#include<iostream>
using namespace std;
class Product{
    string name,Manufacturing_Date;
    float Weight;
    public:
    Product(){
        name = "abc";
        Manufacturing_Date = "1/1/01";
        Weight = 100;
    }
    Product(const Product &p2){
        name = p2.name;
        Manufacturing_Date = p2.Manufacturing_Date;
        Weight = p2.Weight;
    }
    void display(){
        cout<<"\nName-  "<<name<<"\nmanufacturing date-  "<<Manufacturing_Date<<"\nWeight-  "<<Weight;
    }
};
int main(){
    Product p1;
    Product p2(p1);
    p1.display();
    p2.display();
}