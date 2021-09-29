#include <iostream>
using namespace std;
#include "Mass.h"

Mass::Mass() {
    n = 5;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        int y = 5;
        (*this).p[i] = y;
    }
}

Mass::Mass(unsigned int N) {
	n = N;
	p = new int[n];
}

Mass::Mass(const Mass& B) {
    n = B.n;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        (*this).p[i] = B.p[i];
    }
}

Mass::~Mass() {
    delete[]p;
    p = 0;
}

const Mass& Mass::operator=(const Mass& B) {
    if (this == &B) {
        return *this;
    }
    n = B.n;
    delete[]p;
    p = new int[n];
    for (int i = 0; i < n; i++) 
        (*this).p[i] = B.p[i];
    return *this;
}


istream& operator>>(istream& stream, Mass& B) {

    cout << "Input array: " << endl;
    for (int i = 0; i < B.n; i++) {
        stream >> B.p[i];    
    }
    return stream;
}

ostream& operator<<(ostream& stream, const Mass& B) {

    for (int i = 0; i < B.n; i++) {
        stream << B.p[i] << " ";    
    }
    cout << endl;
    return stream;
}

const Mass& Mass::operator-=(const Mass& B)
{
    unsigned int i;
    for (i = 0; i < n; i++)
            (*this).p[i] -= B.p[i];
    return *this;
}



