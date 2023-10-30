/*
Creator: Israel Showell
Date: 10-30-23
Purpose: This program allows a user to enter two integer numbers, and will divide the first number by the second using only subtraction. 
I made this for a medium level Leetcode question. Just figured I should upload it for fun!*/


#include <iostream>
using namespace std; 

int divide(int dividend, int divisor) {

	int quotient = 0; 

	while(dividend!=0) { 
		dividend = dividend - divisor; 
		quotient++; 
	} 

	if(quotient > 2147483648){ 
		return 2147483648 - 1; 
	}
	else if(quotient < -2147483648){ 
		return -2147483648; 
	}
	else{ 
		return quotient; 
	} 
} 

int main() {

	int num1 = 0;
	int num2 = 0;

	cout << "Please enter two integer numbers: " << endl;
	cout << "Second number cannot be 0!" << endl;
	
	do {
		cout << "Number1: ";
		cin >> num1;
		cout << "Number2: ";
		cin >> num2;

	} while (num2 == 0);

	int res = divide(num1, num2);

	cout << endl << "Here is the result: " << res;

	system("PAUSE");//My computer likes C++ programs when I use this, I don't know why....
}