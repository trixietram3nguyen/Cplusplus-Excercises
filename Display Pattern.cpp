//hw06 - ProgramQ1.cpp
/*Tram Nguyen
Apr 06,2018
Write a program that uses loops to display Patterns A and B.
Include a loops that lets user repeat the program until he or she is done.
If the user enter 0 or negative number, promt user to re-enter a positive value for height*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable and initialize 
	int height = 0, col = 0, row = 0;
	char option = 'y';
	bool negative = true;

	//use do while loop to repeat the program until user says he or she is done
	do
	{
		//initialize the bool value 
		negative = true;

		//flag control loop to promt user to re-enter height until the value is positive
		while (negative)
		{
			//promt user to enter height and read in
			cout << "Enter height: ";
			cin >> height;

			/*if statement stating that if the height is less than 0,
			then show user that height has to be postive*/
			if (height <= 0)
			{
				cout << "\nHeight has to be positive" << endl;
			}
			/*else print pattern A and B based on the height user enter
			and indidcate that the negative is false, exit the flag control loop*/ 
			else
			{
				//printing pattern A
				cout << "\nPrinting Pattern A" << endl;
				//outer for-loop to indidcate the row based on the height user entered
				for (row = 1; row <= height; row++)
				{
					//inner for-loop to indicate the column of each row
					for (col = 1; col <= row; col++)
					{
						cout << '#';
						//if the column is equal the row, terminate the loop and continue to the outer loop
						if (col == row)
							continue;
					}
					cout << endl;
				}

				//printing pattern B
				cout << "\nPrinting Pattern B" << endl;
				//outer for-loop indicate the row based on the height user enterd
				for (row = 1; row <= height; row++)
				{
					//inner for-loop indicate the column of each row 
					for (col = row; col <= height; col++)
					{
						cout << '#';
					}
					cout << endl;
				}
				
				//indicate bool negative is false to exit the flag control loop
				negative = false;
			}
		}

		//asking user if he or she want to continue the program and read in option
		cout << "\nDo you wish to run the program again" << endl
			<< "Enter y/Y to run or n/N to quit: ";
		cin >> option;
	} while (option == 'Y' || option == 'y'); /*if user enter Y or y then continue the loop,
											  if not exit the loop*/

	//statement saying the program is done
	cout << "\nDone" << endl;

	return 0;				//exit program
}