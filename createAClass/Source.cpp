#include "Line.h"
#include<iostream>
using namespace std;

void createLineWithLength(int);
void createLineAndIncrement();

int main() {

	Line l1;

	Line l2;
	l2.setLength(3);
	l2.displayLine();
	
	Line l3;
	l3.displayLine();
	l3.incrementByOne();
	l3.displayLine();

	cout << "Now entering function createLineWithLength - 5" << endl;
	createLineWithLength(5);

	cout << "Now entering function createLineAndIncrement" << endl;
	createLineAndIncrement();

	return 0;
}

void createLineWithLength(int lenIn) {
	Line l;
	l.setLength(lenIn);
	l.displayLine();
}

void createLineAndIncrement() {
	Line l;
	l.displayLine();
	l.incrementByOne();
}


/***************************************************************************************

*    constructors are called when an instance of the class is created 
*	 the default constructor in my Line class creates a line of length 1 and prints
*		out 'c' 
*	 An overloaded constructor can also be used (same name as default constructor) to set 
*		any variables, however in this example we only have a default constructor 
* 
* 
*	 a deconstructor is used when the instance of the class is called just before the 
*		instance is gone 
*	 so here the deconstructor for l1, l2, and l3 is called just before the main program is 
*		finished executing
*	 the deconstructor for my standalone functions are called when the function is finished 
*		executing
* 
*
*	 Output from file:
*	 c
	 c
	 ***
	 c
	 *
	 **
	 Now entering function createLineWithLength - 5
	 c
	 *****
	 line of length 5 about to go
	 Now entering function createLineAndIncrement
	 c
	 *
	 line of length 2 about to go
	 line of length 2 about to go
	 line of length 3 about to go
	 line of length 1 about to go 
***************************************************************************************/