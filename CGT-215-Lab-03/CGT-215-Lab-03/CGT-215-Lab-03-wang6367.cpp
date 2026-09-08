// CGT-215-Lab-03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Get the user's function choice and store it as a char variable
char getFunction(){
    char function;
    cout << "Choose a function (+, -, *, /): ";
    cin >> function;
    return function;
}

// get two numbers from the user
double getFirstNumber(){
    double num1;
    cout << "Enter the first number: ";
    cin >> num1;
    return num1;
}

double getSecondNumber(){
    double num2;
    cout << "Enter the second number: ";
    cin >> num2;
    return num2;
}

// Mathematical operation functions
double add(double num1, double num2){
    return num1 + num2;
}

double subtract(double num1, double num2){
    return num1 - num2;
}

double multiply(double num1, double num2){
    return num1 * num2;
}

double divide(double num1, double num2){
    return num1 / num2;
}

// display the result to the user
void showResult(double result){
    cout << "The result is: " << result << endl;
}

// main function to run the program
int main()
{
    // Call input functions and store the returned values
	char function = getFunction();
    double num1 = getFirstNumber();
    double num2 = getSecondNumber();
    double result;

	// perform the chosen function and display the result
    if (function == '+') {
        showResult(add(num1, num2));
    }
    else if (function == '-') {
        showResult(subtract(num1, num2));
    }
    else if (function == '*') {
        showResult(multiply(num1, num2));
    }
    else if (function == '/') {
        showResult(divide(num1, num2));
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
