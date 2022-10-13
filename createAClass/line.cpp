#include"Line.h"
#include<iostream>
using namespace std;


Line::Line() {
	length = 1;
	for (int i = 0; i < length; i++) {
		cout << 'c';
	}
	cout << endl;
}

Line::~Line() {
	cout << "line of length " << length << " about to go" << endl;
}

void Line::setLength(int lenIn) {
	length = lenIn;
}

void Line::incrementByOne() {
	length++;
}

void Line::displayLine() {
	for (int i = 0; i < length; i++) {
		cout << '*';
	}
	cout << endl;
}