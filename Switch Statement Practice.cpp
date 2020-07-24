//hw04_q2.cpp
/*Tram Nguyen
Feb 28,2018
Write a program that compute the area of a square
or a triangle using switch statement
Test with 3 sample runs*/

//preprocessor indicator
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variables and initialize to zero
	char option('0');
	float base(0.0), height(0.0), side(0.0), atriangle(0.0), asquare(0.0);

	/*promt user to enter t to compute area of triangle
	or s to compute area of square and read in*/
	cout << "Enter t to compute area of triangle or s for square: ";
	cin >> option;

	//using switch statement to compute area of triangle or square
	switch (option)
	{
	//choosing t to compute area of the triangle
	case 't':
		cout << "\nYou entered t for triangle" << endl;

		//promt user to enter base and height of the triangle and read in
		cout << "Enter base: ";
		cin >> base;
		cout << "\nEnter height: ";
		cin >> height;

		//compute area of the triangle
		atriangle = ((base * height) / 2);

		//print the result
		cout << "\nArea of triangle of base " << base
			<< " and height " << height
			<< " is " << atriangle << endl;
		break;
	//choosing s to compute area for the square
	case 's':
		cout << "\nYou entered s for square" << endl;
		
		//promt user to enter side of the square and read in
		cout << "Enter length of side: ";
		cin >> side;

		//compute area of the square
		asquare = pow(side, 2.0);

		//print the result
		cout << "\nArea of square of side length " << side
			<< " is " << asquare << endl;
		break;
	//default showing that any option beside t or s is invalid
	default:
		cout << "\nInvalid entry" << endl;
	}

	//print statement saying the program is done
	cout << "\nDone" << endl;

	return 0;					//exit program
}
//pow (side, 2.0) means side to the power of 2.0.