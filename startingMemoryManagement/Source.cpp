#include"safeArray.h"
#include <iostream>
using namespace std;

int main() {
	SafeArray arr1;
	SafeArray arr2;

	if (arr1.at(0) != -1) {
		cout << arr1.at(0);
	}
	else {
		cout << "Index out of bounds" << endl << endl;
	}

	if (arr2.at(10) != -1) {
		cout << arr2.at(10);
	}
	else {
		cout << "Index out of bounds" << endl << endl;
	}

	return 0;
}