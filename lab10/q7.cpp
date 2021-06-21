#include <iostream>
using namespace std;
template <class T>
class Pair
{
    T num1, num2;
public:
    Pair(T n1, T n2){
        num1 = n1;
        num2 = n2;
    }
    T get_max(){
        return num1>num2 ? num1 : num2;
    }
};
int main(){
    Pair<int> obj1(2, 1);
    Pair<float> obj2(2.4, 1.2);
    cout << "Int results:"<<obj1.get_max() << endl;
    cout << endl << "Float results:"<<obj2.get_max() << endl;
}