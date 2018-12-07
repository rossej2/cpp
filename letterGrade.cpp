/* Description: This program will prompt the user for a double
				value that will represent a percent grade from
				zero to one hundred. There will be no rounding so
				a 89.9% is still a 'B+';
*/

#include <iostream>
using namespace std;

int main(void) 
{
	double percentGrade = 0.0; // this will be a user assigned double value that will represent a percentage grade
	string letterGrade = ""; // defined as "" and to be assigned in one of the if statements. Using string because a char can only hold one character
	
	cout << endl << "Enter a percentage value:" << endl;
	cin >> percentGrade; //prompts user to assign percentGrade. Doubles are not rounded up or down
	
	if (percentGrade >= 93 && percentGrade <= 100) // 93 <= x <= 100
	{
		letterGrade = "A";
	}
	else if(percentGrade >= 90 && percentGrade < 93) // 90 <= x < 93
	{
		letterGrade = "A-";
	}
	else if(percentGrade >= 88 && percentGrade < 90) // 88 <= x < 90
	{
		letterGrade = "B+";
	}
	else if(percentGrade >= 83 && percentGrade < 88) // 83 <= x < 88
	{
		letterGrade = "B";
	}
	else if(percentGrade >= 80 && percentGrade < 83) // 80 <= x < 83
	{
		letterGrade = "B-";
	}
	else if(percentGrade >= 78 && percentGrade < 80) // 78 <= x < 80
	{
		letterGrade = "C+";
	}
	else if(percentGrade >= 73 && percentGrade < 78) // 73 <= x < 78
	{
		letterGrade = "C";
	}
	else if(percentGrade >= 70 && percentGrade < 73) // 70 <= x < 73
	{
		letterGrade = "C-";
	}
	else if(percentGrade >= 68 && percentGrade < 70) // 68 <= x < 70
	{
		letterGrade = "D+";
	}
	else if(percentGrade >= 63 && percentGrade < 68) // 63 <= x < 68
	{
		letterGrade = "D";
	}
	else if(percentGrade >= 60 && percentGrade < 63) // 60 <= x < 63
	{
		letterGrade = "D-";
	}
	else if(percentGrade >= 0 && percentGrade < 60) // 0 <= x < 60
	{
		letterGrade = "F";
	}
	else // this branch executes if percent grade is less then 0 or greater then 100
	{
		cout << endl << "ERROR! Invalid grade entry" << endl;
		return 0;
	}
	
	//OUTPUT//
	cout << endl << "The corresponding letter grade for " << percentGrade << "% is: " << letterGrade << endl;
	return 0;
}

