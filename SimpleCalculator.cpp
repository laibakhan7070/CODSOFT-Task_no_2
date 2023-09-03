//Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division.
// Allow the user to input two numbers and choose an operation to perform.

#include <iostream>
#include<iomanip>
#include <stdexcept>
using namespace std;

double add(double a, double b)
{
	return a + b;
}

double subtract(double a, double b)
{
	return a - b;
}

double multiply(double a, double b)
{
	return a * b;
}

double divide(double a, double b)
{
	if (b != 0) {
		return a / b;
	}
	else {
		throw runtime_error("Error: Division by zero is not allowed.");
	}
}



int main()
{
	cout << "-------------------------------------------------------------------------\n";
	cout << "\t\t\t Welcome to the Simple Calculator! " << endl;
	cout << "-------------------------------------------------------------------------\n";

	cout << "You can enter any two numbers and choose any basic arithmetic operator.\n";
	cout << "I'll calculate the answer for you. \n";

	double num1, num2;
	string operation;
	do
	{
		

		// Input the operation to perform
		cout << "\nSelect an operation:" << endl;
		cout << "Press 1 for Addition (+)" << endl;
		cout << "Press 2 for Subtraction (-)" << endl;
		cout << "Press 3 for Multiplication (*)" << endl;
		cout << "Press 4 for Division (/)" << endl;
		cout << "Press 5 for Exit" << endl;

		cout << "Enter your choice: ";
		cin >> operation;
		if (operation.length() == 1) // Check for single character input
		{
			switch (operation[0]) 
			{
			case '1':
				cout << "Enter the first number: ";
				cin >> num1;
				if (cin.fail()) {
					cout << "Invalid input for num1. Please enter a valid number." << endl;
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
					continue;
				}

				cout << "Enter the second number: ";
				cin >> num2;
				if (cin.fail()) {
					cout << "Invalid input for num2. Please enter a valid number." << endl;
					cin.clear(); 
					cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
					continue; 
				}
			cout << "Result of Addition:  " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
			break;

			case '2':
				cout << "Enter the first number: ";
				cin >> num1;
				if (cin.fail()) {
					cout << "Invalid input for num1. Please enter a valid number." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}

				cout << "Enter the second number: ";
				cin >> num2;
				if (cin.fail()) {
					cout << "Invalid input for num2. Please enter a valid number." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
			cout << "Result of Subtraction:  " << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
			break;

			case '3':
				cout << "Enter the first number: ";
				cin >> num1;
				if (cin.fail()) {
					cout << "Invalid input for num1. Please enter a valid number." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}

				cout << "Enter the second number: ";
				cin >> num2;
				if (cin.fail()) {
					cout << "Invalid input for num2. Please enter a valid number." << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
				cout << "Result of Multiplication:  " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
			break;

		case '4':
			cout << "Enter the first number: ";
			cin >> num1;
			if (cin.fail()) {
				cout << "Invalid input for num1. Please enter a valid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}

			cout << "Enter the second number: ";
			cin >> num2;
			if (cin.fail()) {
				cout << "Invalid input for num2. Please enter a valid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			try {
				cout << "Result of Division:  " << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
			}
			catch (const runtime_error& e) {
				cout << e.what() << endl;
			}
			break;

		case '5':
			cout << "Exiting the calculator. Goodbye! :) \n";
			break;
		default:
			cout << "Invalid input. Please try again. \n";
			break;
			}
		}
		else
		{
			cout << "Invalid input. Please try again." << endl;
		}

		cout << "-------------------------------------------------------------------------\n";

	} while (operation != "5");

	return 0;
}
