/***************************************************************************************

*    Usage: used for initliasation clarification
*    Title: arrays
*    Author: cplusplus.com
*    Date: 11/10/22
*    Code version: 2.0
*    Availability: https://cplusplus.com/doc/tutorial/arrays/
*
***************************************************************************************/

#pragma once
#ifndef SAFEARRAY_H
#define SAFEARRAY_H

class SafeArray {
public:
	SafeArray();
	~SafeArray();
	int at(int);
private:
	int* arrayPointer;
};
#endif // !SAFEARRAY_H

