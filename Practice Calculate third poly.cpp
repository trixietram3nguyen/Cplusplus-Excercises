//hw2_source.cpp
/*Tram Nguyen
Feb 10,2018
Compute and display the value of the third-order polynomial
     a*x^3+b*x^2+c*x+d 
Use appropriate functions from the <cmath> library
Display what the program does
Display suitable promts to alert users to enter data
Run 3 test data sets*/

//preprocessor directive
#include <iostream>
using namespace std;

//Input variables: a, b, c, d, and x
//Function declarations: float 
//Math library functions: pow

//main program
int main()
{
	//declare input and initalize to zero
	float a = 0.0, b = 0.0, c = 0.0, d = 0.0, x = 0.0;

	//display message telling users what the program does
	cout << "\nThis program computes the value of a third-degree polynomial" << endl;

	//promt users to enter specific data and read in
	cout << "\nEnter the coefficient of the x-cubed term, a: ";
	cin >> a;
	cout << "\n\nEnter the coefficient of the x-squared term, b: ";
	cin >> b;
	cout << "\n\nEnter the coefficient of the x-term, c: ";
	cin >> c;
	cout << "\n\nEnter the coefficient of the constant term, d: ";
	cin >> d;
	cout << "\n\nEnter the value for the variable, x: ";
	cin >> x;

	//print the value of a third-degree polynomial
	cout << "\n"  //go to next line on output console
		<< a << "x3 + " << b << "x2 + " << c << "x + " << d << " = "
		<< a*pow(x, 3.0) + b*pow(x, 2.0) + c*x + d << endl << endl;

	return 0;					//exit program
}
//Function declarations: float set the variables to floating point numbers (4 bytes)
//<cmath> library functions definitions: pow (x,num)-x raise to the num power