//hw06 - ProgramQ2.cpp
/*Tram Nguyen
Apr 06,2018
Write a program uses a loop to display each term and 
determine the sum of a geometric series.
Bonus - Implement check for input failure*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare input value and initialize
	double a = 0.0, r = 0.0, n = 0.0;
	int term = 0;

	//declare output value and initialize
	double sum = 0.0;

	//promt user to enter value for a, r and n, then read in
	cout << "Enter value for a, r and n: ";
	cin >> a >> r >> n;

	//use do-while loop to implement check for input failure
	do
	{
		//while loop to check goodbits, if cin.good is false then enter the loop
		while (!cin.good())
		{
			//clear out the bits
			cin.clear();
			//ignore 100 character or new line
			cin.ignore(100, '\n');
			//promt user that the input is wrong, re-enter value
			cout << "\nFailure in input detected!" << endl
				<< "Re-enter values for a, r and n: ";
			//read in new value
			cin >> a >> r >> n;
		}

		/*if statement showing if goodbits is true then 
		show the term and the sum of the geometric sequence*/
		if (cin.good())
		{
			//show user the value that they entered for a, r, and n
			cout << "\nYou entered:" << endl
				<< "a = " << a
				<< " r = " << r
				<< " n = " << n
				<< endl;

			//show the geometric series and the sum
			cout << "\nGeometric Series = ";
			//for loop indicate how many term to show based on the n value
			for (term = 1; term <= n; term++)
			{
				//compute the sum of the geometric sequence
				sum += a*pow(r, (term - 1));
				
				//display the operation and the a, r and n value
				cout << a << " * " << r << "^" << term - 1;

				//if the term value is less than n, then print the plus sign
				if (term < n)
				{
					//printing theplus sign
					cout << " + ";
				}
			}
			//print the equal sign at the end of the sequences and the sum
			cout << " = " << sum << endl;
		}
	} while (!cin.good());    /*continue the loop if goodbits is false,
							  and exit the loop if goodbits is true*/

	//print statement saying that the program is done
	cout << "\nDone" << endl;

	return 0;				//exit program
}