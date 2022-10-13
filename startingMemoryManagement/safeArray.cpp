#include"safeArray.h"
#include<iostream>
using namespace std;

SafeArray::SafeArray() {
	arrayPointer = new int[10];
}

SafeArray::~SafeArray() {
	delete[] arrayPointer;
	arrayPointer = NULL;
}

int SafeArray::at(int index) {
	if (index > 9) {
		return -1;
	}
	else {
		return arrayPointer[index];
	}
}