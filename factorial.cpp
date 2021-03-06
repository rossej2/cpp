/* Description: A basic factorial cpp program. User will input an integer value and the program
                will print out that integers factorial value. A factorial of 5 for example is 
                5x4x3x2x1 which is 120. Factorial of 0 is 1.
*/

#include <iostream>
using namespace std;

long long factorial(int number)
{
	long long fctrl = 1;	// I'm using a long long because factorials generate very large numbers
	if (number == 0) 		// factorial of zero is equal to one
	{
		return 1;
	}
	else
	{
		while(number > 1)
		{
			fctrl *= number;
			number--;
		} // end while loop
		return fctrl;
	}
	return 0;
}

int main(void) 
{
	int factNum = 0; 		// number to applied to a factorial
	long long factVal = 0;	// long long type used
	
	cout << endl << "Please enter a number to be used in a factorial" << endl;
	cin >> factNum;
	
	while(factNum > -1)
	{
		factVal = factorial(factNum);
		//OUTPUT//
		cout << "The factorial of " << factNum << " is: " << factVal << endl;
		cout << endl << "Please enter a number to be used in a factorial" << endl;
		cin >> factNum;
	}
	
	return 0;
}
