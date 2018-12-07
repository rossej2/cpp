#include <iostream>
#include <vector>
using namespace std;

void numOfLetterGrades(int& a, int& b, int& c, int& d, int& f, vector<double> grades)
{
	double grd = 0.0; // to be used to check grade at index 'x'
	for(int idx = 0; idx < 10; idx++) // this loop assigns the integers in the main with the number of students who got that grade
	{
		grd = grades.at(idx);
		if(grd >= 90) 	// increments integer a for every grade >= 90
		{
			a++;
		}
		else if(grd >= 80) 	// increments integer b for every grade >= 80
		{
			b++;
		}
		else if(grd >= 70) 	// increments integer c for every grade >= 70
		{
			c++;
		}
		else if(grd >= 60) // increments integer d for every grade >= 60
		{
			d++;
		}
		else		// increments integer f for every grade less than 60
		{
			f++;
		}
	}
}

int main(void) 
{
	vector<double> grades(10);
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int F = 0;
	
	cout << endl;
	for(int index = 0; index < 10; index++)
	{
		cout << "Please enter in a grade between 0 and 100" << endl;
		cin >> grades.at(index);
		while(grades.at(index) < 0 || grades.at(index) > 100)
		{
			cout << "ERROR! Please enter in grade" << endl;
			cin >> grades.at(index);
		}
	}
	numOfLetterGrades(A,B,C,D,F,grades); // calls the method numOfLetterGrades()
	
	//OUTPUT//
	cout << A << " Student(s) got an A or: " << A*10 << "%" << endl;
	cout << B << " Student(s) got a B or: " << B*10 << "%" << endl;
	cout << C << " Student(s) got a C or: " << C*10 << "%" << endl;
	cout << D << " Student(s) got a D or: " << D*10 << "%" << endl;
	cout << F << " Student(s) got an F or: " << F*10 << "%" << endl;
	return 0;
}

