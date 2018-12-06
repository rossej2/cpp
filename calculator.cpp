
/* Description: This program excepts 2 user inputed numbers and a simple arithmetic. 
                For this I plan to add support for addition, subtract, multiplication,
		subtraction and maybe even exponents.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(void) 
{
	double userA = 0.0; // A double to be assigned by user. I am using doubles to take into account division.
	double userB = 0.0; // Another double to be assigned by user.
	double result = 0.0; // The result of userA and userB and the user entered operation.
	char operation; // to be assigned by user to determine operation
	
	cout << endl << "Enter a number for the calculation" << endl;
	cin >> userA; // assigns userA a value
	
	cout << endl << "What kind of operation do you want?" << endl;
	cout << "+ = addition" << endl << "- = subtraction" << endl << "* = multiplication" << endl << "/ = divison" << endl << "^ = exponent" << endl;
	cin >> operation; // assigns operation a arithmetic operation
	
	cout << endl << "Enter another number for the calculation" << endl;
	cin >> userB; // assigns userB a value
	
	if(operation == '+') // addition
	{
		result = userA + userB;
	}
	else if(operation == '-') // subtraction
	{
		result = userA - userB;
	}
	else if(operation == '*') // multiplication
	{
		result = userA * userB;
	}
	else if(operation == '/' && userB != 0.0) // divison: also checks to see if userB is not zero because you cannot divide by zero
	{
		result = userA / userB;
	}
	else if(operation == '^') // exponent
	{
		result = pow(userA, userB);
	}
	else // the output if the assigned character is not supported or user tries to divide by zero
	{
		cout << endl << "ERROR! Unrecognized format. Please try again later." << endl;
		return 0; // this is so that the code ends and does not execute the regular output
	}
	
	//OUTPUT//
	cout << endl << "The value of " << userA << operation << userB << " is: " << result << endl;
	return 0;
}

