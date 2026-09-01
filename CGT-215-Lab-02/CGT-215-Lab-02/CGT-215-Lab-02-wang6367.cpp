// CGT-215-Lab-02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double num1, num2; // stores two decimal numbers
	char operation; //stores one single character

	// user input
	cout << "Enter first number: "; 
	cin >> num1;

	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter second number: ";
	cin >> num2;

	// perform the operation based on user input
	if (operation == '+') {
		cout << "The result is: " << num1 + num2 << endl;
		}
	else if (operation == '-') {
		cout << "The result is: " << num1 - num2 << endl;
		}
	else if (operation == '*') {
		cout << "The result is: " << num1 * num2 << endl;
		}
	else if (operation == '/') {
		if (num2 == 0) {
			cout << "Cannot be divided by zero." << endl;
		}
		else {
			cout << "The result is: " << num1 / num2 << endl;
		}
		}

		return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

