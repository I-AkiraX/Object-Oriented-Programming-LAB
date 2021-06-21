#include <iostream>
using namespace std;
float CheckDen(float den){
	if (den == 0)
		throw 1.0f;
	else
		return den;
}

int main() {
	float num, den, res;
	num = 12.5;
	den = 0;
	try {
		if (CheckDen(den)) { 
			res = (num / den); 
			cout << "The quotient is "<< res << endl;
		}
	}
	catch (float) {
		cout << "Exception occurred" << endl;
	}
}