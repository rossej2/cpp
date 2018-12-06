/* Description: User enters an integer value. Output is a pyramid comprised of only
                spaces and asterisks. The user input will determine the number of
                asterisks that make up the base of the pyramid
*/

#include <iostream>
using namespace std;

int main(void) 
{
    const char star = '*'; 	// stars
	int base = 0; 			// number of asterisks that make up base
	int spaces = 0; 		// number of spaces before patters begins
	int level = 1; 			// identifies which level is currently being constructed
	int numStars = 0; 		// holds onto number of stars per level
	
	cout << endl << "Please enter the value of the base of the pyramid" << endl;
	cin >> base;			// user enters an integer for base
	
	if(base <= 0)			// base cannot be 0 or negative so it errors out
	{
		cout << endl << "ERROR";
	}
	else
	{
		for(int level = 1; level <= base; level++)
		{
			numStars = level;
			spaces = base - level;
			while(spaces > 0) // inserts spaces before pattern begins
			{
				cout << " ";
				spaces--;
			}						// end while loop 1
			
			while(numStars > 0) // inserts patter of an asterisk plus a space
			{
				cout << star << " ";
				numStars--;
			}						// end while loop 2
			cout << endl;
		}
	}
	return 0;
}
