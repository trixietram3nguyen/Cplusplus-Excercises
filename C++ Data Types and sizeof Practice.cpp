//practice with C++ data types and sizeof.cpp

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare kilometer as integer and initialize value to zero
	int kilometer(0), x(0);
	//declare miles as double and initialize value to zero
	double miles(0.0);

	//formula convertion of kilometer to miles
	cout << "1 kilometer = 0.621 miles" << endl;

	//promt user
	cout << "Enter the value of kilometer: " << endl;
	//read in the value entered into kilometer
	cin >> x;
	//convert x kilometers to miles
	cout << x << " kilometers = " << x * 0.621 << " miles " << endl;

	//sizeof kilometers and miles
	cout << "sizeof kilometer = " << sizeof(kilometer) << " bytes " << endl;
	cout << "sizeof miles = " << sizeof(miles) << " bytes " << endl;

	return 0;				//exit program
}