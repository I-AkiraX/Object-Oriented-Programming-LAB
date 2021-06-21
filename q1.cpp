#include <iostream>
using namespace std;

void FUN_AREA(float r)
{
    cout << "Area of Circle: " << 3.14 * r * r <<"\n";
}

void FUN_AREA(float l, float b)
{
    cout << "Area of Rectangle: " << l * b<<"\n";
}   

void FUN_AREA(float l, float b, float h)
{
    cout << "Volume of box: " << l * b * h<<"\n";
}
void FUN_AREA()
{
    cout << "No argument\n";
}

int main()
{
    float r,l,b,h,le,br;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter length & breadth of rectangle: ";
    cin >> le >> br;
    cout << "Enter length,breadth & height of box: ";
    cin >> l >> b >> h;

    FUN_AREA();
    FUN_AREA(r);
    FUN_AREA(le, br);
    FUN_AREA(l, b, h);
}