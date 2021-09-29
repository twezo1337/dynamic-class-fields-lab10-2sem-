#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class Mass {

	unsigned int n;
	int* p;

public:
	Mass();
	Mass(unsigned int N);
	Mass(const Mass& B);
	~Mass();

	const Mass& operator=(const Mass& B);
	const Mass& operator-=(const Mass& B);

	friend istream& operator>>(istream& stream, Mass& B);
	friend ostream& operator<<(ostream& stream, const Mass& B);
};
#endif
