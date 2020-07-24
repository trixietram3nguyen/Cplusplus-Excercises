//hw01_q4.cpp
/*Tram Nguyen
Feb 02,2018
Create the Part No. and Price table using C++ Program
Get use to the simplest form of C++ program 
Application of cout and escape character*/

//preprocessor directive
#include <iostream>
using namespace std;

/*the table consist of 2 columns which are part number and price
and 5 rows with 4 different parts and the titlr row*/

//main program
int main()
{
	//print the titles of the 2 columns
	cout << "PART NO.\tPRICE" << endl
	//print the second row of the table with part number and price
	     << "T1267\t\t$6.34" << endl
	//print the third row of the table with part number and price
	     << "T1300\t\t$8.92" << endl
	//print the forth row of the table with part number and price
	     << "T2401\t\t$65.40" << endl
	//print the fifth row of the table with part number and price
	     << "T4482\t\t$36.99" << endl;

	return 0;        //exit program
}
//cout << means to print the information into the console
// "" means appear as it is in the quotation mark
//\t means horizontal tab
// endl means goes to newlines
//to make everything line up in the table, I need to put \t\t for row 2 to 4