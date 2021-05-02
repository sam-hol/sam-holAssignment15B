/*
Sam Hollinger
CIS 1202-NR1
4/30/21
*/

#include <iostream>
using namespace std;

//accepts integer values and halves them, returning that value rounded to the nearest whole number
int Half(int num) {
	return static_cast<int>(round(static_cast<double>(num) / 2));
}

template<class N> //accepts non-integer numbers and returns their value / 2
N Half(N num) {
	return num / 2;
}

int main() {
	double dbl = 3.2;
	float flt = 5.73f;
	int iNum = 3;

	cout << "\nHalf of the double " << dbl << " is " << Half(dbl);
	cout << "\nHalf of the float " << flt << " is " << Half(flt);
	cout << "\nHalf of the integer " << iNum << " is " << Half(iNum);

	cout << "\n\n";
	system("pause");
	return 0;
}


