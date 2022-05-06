/*************************************************************************
# Author: Vince Bjazevic
# Project: Practice fundamentals
# File: fundamentals.cpp
# Date: 04/20/2022
*************************************************************************/


// Using the main funtion to run all of the pratice code, going to comment
// out code I'm not using rather than deleting 

#include <iostream>
#include <vector>
#include <string>
using namespace std;


// Write a program that prints hello world
void helloWorld(){
    cout << "Hello world\n";
    return;
}

// Write a program that adds two numbers
int add(int a, int b){
    return a+b;
}

// Write a program find size of data types
void printDataSizes(){
    cout << "Find Size of fundamental data types:\n";
    cout << "-------------------------------------\n";
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of short: " << sizeof(short) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long: " << sizeof(long) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of long double: " << sizeof(long double) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
}

// Using built in variables to show max limits of built-in data types
void printMaxValues(){
        cout << "\n Check the upper and lower limits of integer :\n";
	cout << "--------------------------------------------------\n";
	cout << "The maximum limit of int data type: " << INT_MAX << endl;
	cout << "The minimum limit of int data type: " << INT_MIN << endl;
	cout << "The maximum limit of unsigned int data type: " << UINT_MAX << endl;
	cout << "The maximum limit of long long data type: " << LLONG_MAX << endl;
	cout << "The minimum limit of long long data type: " << LLONG_MIN << endl;
	cout << "The maximum limit of unsigned long long data type: " << ULLONG_MAX << endl;
	cout << "The Bits contain in char data type: " << CHAR_BIT << endl;
	cout << "The maximum limit of char data type: " << CHAR_MAX << endl;
	cout << "The minimum limit of char data type: " << CHAR_MIN << endl;
	cout << "The maximum limit of signed char data type: " << SCHAR_MAX << endl;
	cout << "The minimum limit of signed char data type: " << SCHAR_MIN << endl;
	cout << "The maximum limit of unsigned char data type: " << UCHAR_MAX << endl;
	cout << "The minimum limit of short data type: " << SHRT_MIN << endl;
    cout << "The maximum limit of short data type: " << SHRT_MAX << endl;
    cout << "The maximum limit of unsigned short data type: " << USHRT_MAX << endl;
   cout << endl;
}



int main(){
    helloWorld();
    int answer = add(5, 5);
    cout << "The sum is: " << answer << endl;
    printDataSizes();
    return 0;
}


