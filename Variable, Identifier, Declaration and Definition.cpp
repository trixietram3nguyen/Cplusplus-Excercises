//
// Calculate the Area of a Rectangle
//

//preprocessor director
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare 2 float variables as length and width and initial value to zero
	float	length = 0.0, width = 0.0;

	//print current value of float variables length and width
	cout << "\nlength = " << length << "\nwidth = " << width << endl;

	//print the formula for the area of the rectangle and the area at initial values 
	cout << "\nComputing Area = length * width "<< endl;

	//sizeof
	cout << "sizeof length = " << sizeof(length) << " bytes, " << endl
		<< "sizeof width = " << sizeof(width) << " bytes " << endl;

	//promt user to enter values
	cout << "\nEnter Length & width of rectangle:";

	//read in the value entered into length and width
	cin >> length >> width;

	//print the area with current values
	cout << "\nArea = " << length * width << endl;

	//print statement saying you are done
	cout << "\nDone" << endl;


	short i_m_short(0);
	int i_m_int(0);
	long i_m_long(0);

	cout << "\n sizeof i_m_short = " << sizeof(i_m_short) << " bytes " << endl
		<< "\n sizeof i_m_int = " << sizeof(i_m_int) << " bytes " << endl
		<< "\n sizeof i_m_long = " << sizeof(i_m_long) << " bytes " << endl;

	cout << "Enter 3 interger values: ";
	cin >> i_m_short >> i_m_int >> i_m_long;
	cout << "\nYou entered: " << endl;
	cout << "i_m_short = " << i_m_short << endl
		<< "i_m_int = " << i_m_int << endl
		<< "i_m_long = " << i_m_long << endl;

	cout << "\nDone" << endl;
	
	return 0;


}