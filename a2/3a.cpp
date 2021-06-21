#include<iostream>
using namespace std;
class Mobile_Model{
    float Weight,Camera_Pixel;
    int Memory_Capacity;
    public:
    void input(){
        cout<<"Enter the weight of mobile:  ";
        cin>>Weight;
        cout<<"Enter the camera pixel:  ";
        cin>>Camera_Pixel;
        cout<<"Enter the memory capacity:  ";
        cin>>Memory_Capacity;
    }
    void display(){
        cout<<"\nMobile with larger camera pixel--\nWeight-  "<<Weight<<"\nCamera pixel-  "<<Camera_Pixel<<"\nMemory capacity-  "<<Memory_Capacity;
    }
    void large(Mobile_Model &m2){
        if(Camera_Pixel>m2.Camera_Pixel)
            display();
        else if(Camera_Pixel<m2.Camera_Pixel)
            m2.display();
        else
            cout<<"\nBoth have same camera pixel.";
    }
};
int main(){
    Mobile_Model m1,m2;
    cout<<"Enter data of mobile 1--\n";
    m1.input();
    cout<<"\n\nEnter data of mobile 2--\n";
    m2.input();
    m1.large(m2);
}