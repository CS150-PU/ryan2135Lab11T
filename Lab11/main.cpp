//**********************************************************************
// File:       main.cpp
// Author:     CS, Pacific University
// Date:       11/9/21
// Class:      CS 150-XX
// Assignment: Lab11 Arrays and Functions
// Purpose:    Gain more experience with functions, arrays, and passing
//						 arrays to functions 
// Hours:
//**********************************************************************
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX = 10;

void printTitle (const char title[]);
void printArray (const int arry[], int count);
int  sumOfArray (const int arry[], int count);
void insertLastArray (int arry[], int &count,
	int maxCount, int insertValue);
void insertFirstArray (int arryDestination[], int &count,
	int maxCount, int insertValue);
bool isSorted (const int arry[], int count);
void reverseArray (int arry[], int count);

/***********************************************************************
Function:     main

Description:  Performs some calculations on points as described in the
							program's purpose.

Parameters:   None

Returned:     Exit Status
***********************************************************************/
int main () {

	int arrayA[MAX] = { 1, 2, 3, 4, 5 }, countA = 5;
	int arrayB[MAX] = { 10, 9, 8, 7, 6 }, countB = 5;

	//printTitle ("Printing Array A: ");
	//printArray (arrayA, countA);
	//cout << endl << endl;

	//printTitle ("Printing Array B: ");
	//printArray (arrayB, countB);
	//cout << endl << endl;

	//printTitle ("Sum Of Array A: ");
	//cout << sumOfArray (arrayA, countA) << endl << endl;

	//printTitle ("Sum Of Array B: ");
	//cout << sumOfArray (arrayB, countB) << endl << endl;

	//printTitle ("Array A after adding 6 at the end: ");
	//insertLastArray (arrayA, countA, MAX, 6);
	//printArray (arrayA, countA);
	//cout << endl << endl;

	//printTitle ("Array B after adding 11 at the beginning: ");
	//insertFirstArray (arrayB, countB, MAX, 11);
	//printArray (arrayB, countB);
	//cout << endl << endl;

	//printTitle ("Is Array A sorted? ");
	//if (isSorted (arrayA, countA)) {
	//	cout << "Yes" << endl << endl;
	//}
	//else {
	//	cout << "No" << endl << endl;
	//}

	//printTitle ("Is Array B sorted? ");
	//if (isSorted (arrayB, countB)) {
	//	cout << "Yes" << endl << endl;
	//}
	//else {
	//	cout << "No" << endl << endl;
	//}

	//printTitle ("Array A after reversing: ");
	//reverseArray (arrayA, countA);
	//printArray (arrayA, countA);
	//cout << endl << endl;

	//printTitle ("Array B after reversing: ");
	//reverseArray (arrayB, countB);
	//printArray (arrayB, countB);
	//cout << endl << endl;

	return EXIT_SUCCESS;
}

/***********************************************************************
Function:     printTitle

Description:  prints an array of characters on the screen using a loop.
							The character array is null terminated meaning the last
							character in the array is '\0'. Each character in the
							array is outputted until the null '\0' is reached.

Parameters:   title - the title to be printed

Returned:     none
***********************************************************************/
void printTitle (const char title[]) {

}

/***********************************************************************
Function:     printArray

Description:  prints each element of an array justified in a field of 3

Parameters:   arry  - the array to be printed
							count - the number of elements in the array

Returned:     none
***********************************************************************/
void printArray (const int arry[], int count) {
	const int COLUMN_WIDTH = 3;

}

/***********************************************************************
Function:     sumOfArray

Description:  returns the sum of all elements in an array

Parameters:   arry  - the array to be added together
							count - the number of elements in the array

Returned:     sum of all elements in array
***********************************************************************/
int	sumOfArray (const int arry[], int count) {
	return 0;
}

/***********************************************************************
Function:     insertLastArray

Description:  adds a value at the end of the array if there is space
							available

Parameters:   arry			  - the array to be modified
							count				- the number of elements in the array
							maxCount		- the actual size of the array
							insertValue	- the value to input into the array

Returned:     none
***********************************************************************/
void insertLastArray (int arry[], int &count,
	int maxCount, int insertValue) {

}

/***********************************************************************
Function:     insertFirstArray

Description:  adds a value at the beginning of the array if there is
							space available. Each element of the array is shifted down
							by 1 to make room for the new value

Parameters:   arry				- the array to be modified
							count				- the number of elements in the array
							maxCount		- the actual size of the array
							insertValue	- the value to input into the array

Returned:     none
***********************************************************************/
void insertFirstArray (int arry[], int &count,
	int maxCount, int insertValue) {

}

/***********************************************************************
Function:     isSorted

Description:  Checks if the array is sorted

Parameters:   arry  - the array to be tested
							count - the number of elements in the array

Returned:     true if the array is sorted increasing; else, false
***********************************************************************/
bool isSorted (const int arry[], int count) {
	return true;
}

/***********************************************************************
Function:     reverseArry

Description:  returns the array with elements reversed

Parameters:   arry   - the array to be reversed
							count	 - the number of elements in the array

Returned:     none
***********************************************************************/
void reverseArray (int arry[], int count) {

}
