/***************************************************************************************

*    Usage: To create the array within the function
*    Title: arrays & pointers II
*    Author: usna.edu
*    Date: 11/10/22
*    Code version: 2.0
*    Availability: https://www.usna.edu/Users/cs/choi/ic210/lec/l19/lec.html
*
***************************************************************************************/

#include <iostream>
using namespace std;

int* getArray(int, int);

int main() {

	cout << getArray(5, 1) << endl;

	return 0;
}

int* getArray(int N, int x) {
	// create array of size N
	int* arr = new int[N];
	// initialise each value to x
	for (int i = 0; i < N; i++) {
		arr[i] = x;
	}
	//return pointer to array
	return arr;
}