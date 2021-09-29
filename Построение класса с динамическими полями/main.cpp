#include <iostream>
#include <fstream>
using namespace std;
#include <windows.h>   
#include "Mass.h"

int main(void) {

	const int N = 5;
	Mass A(N+2), B(N+3);
	cout << "Enter array A:" << endl;
	cin >> A;
	cout << "Enter array B:" << endl;
	cin >> B;
	cout << "The array A:" << endl;
	cout << A;
	cout << "The array B:" << endl;
	cout << B;

	Mass C;
	cout << "Kosntruktor po umolchaniu C" << endl << C;
	Mass D(C);
	cout << "Konstruktor kopii D" << endl << D;
	C = A;
	cout << "Prisvanie C" << endl << C;

	D -= B;
	cout << "D -= B" << endl << D;
	return 0;
}