// CGT-215-Lab-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void factorial(){
	int num;
	int result = 1;

	cout << "Enter a positive integer: ";
	cin >> num;

	while (num < 0) {
		cout << "Invalid number, try again: ";
		cin >> num;
	}

	for (int i = 1; i <= num; i++) {
		result *= i;
	}

	cout << "The Factorial is: " << result << endl;

}

void arithmetic(){
	int first;
	int difference;
	int amount;

	cout << "Enter the first number: ";
	cin >> first;

	cout << "Enter the difference: ";
	cin >> difference;

	cout << "Enter the number of terms: ";
	cin >> amount;

	while (amount <= 0) {
		cout << "Invalid number, try again: ";
		cin >> amount;
	}

	cout << "Arithmetic series: ";

	for (int i = 0; i < amount; i++) {
		cout << first << "";
		first = first + difference;
	}

	cout << endl;
}

void geometric(){
	int first;
	int ratio;
	int amount;

	cout << "Enter the first number: ";
	cin >> first;

	cout << "Enter the ratio: ";
	cin >> ratio;

	cout << "Enter the number of terms: ";
	cin >> amount;
	
	while (amount <= 0) {
		cout << "Invalid number, try again: ";
		cin >> amount;
	}

	cout << "Geometric series: ";
	
	for (int i = 0; i < amount; i++) {
		cout << first << "";
		first = first * ratio;
	}

	cout << endl;
}

int main()
{
	int choice = 0;

	while (choice != 4) {
		cout << "Choose a program:" << endl;
		cout << "1. Factorial" << endl;
		cout << "2. Arithmetic Series" << endl;
		cout << "3. Geometric Series" << endl;
		cout << "4. Exit" << endl;
		cout << "Enter your choice: ";

		cin >> choice;

		if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		else if (choice == 4) {
			cout << "Program ended." << endl;
		}
		else {
			cout << "Invalid choice, try again." << endl;
		}
	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
