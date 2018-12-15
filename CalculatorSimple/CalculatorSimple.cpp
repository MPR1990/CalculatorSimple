// CalculatorSimple.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char op;
	float num1, num2;

	cout << "Enter operator either + or - or * or /: ";
	cin >> op;

	cout << "Enter first operand: " << flush;
	cin >> num1;

	cout << "Enter second operand: " << flush;
	cin >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	default:
		// If the operator is other than +, -, * or /, error message is shown
		cout << "Error! Selected operation is not correct";
		break;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

