//hw04_q1.cpp
/*Tram Nguyen
Feb 28,2018
Write a program that indicate if student Pass or Fail
by entering three exams score.
Passing mark is 40 and mark it as constant in the program.
Student pass if all three exam is pass,
Student might pass if only one exam is fail
and the overall average is greater than or equal 50.
Test with 4 sample runs*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare constant variable
	int const PASS = 40;
	//declare variable and initialize to zero
	float Grade_1 = 0.0, Grade_2 = 0.0, Grade_3 = 0.0, Average = 0.0;

	//promt user to enter 3 marks ad read in
	cout << "Enter the 3 marks, separated by a space: "<<endl;
	cin >> Grade_1 >> Grade_2 >> Grade_3;

	//show student the value they entered
	cout << "\n\nYou entered: " << endl
		<< "Grade_1 = " << Grade_1 << endl
		<< "Grade_2 = " << Grade_2 << endl
		<< "Grade_3 = " << Grade_3 << endl;

	//calculating the average of 3 marks
	Average = (Grade_1 + Grade_2 + Grade_3) / 3;

	//using if-else-if statment to indicate if student is pass or fail
	/*logical operator indicate if all 3 grade is greater or equal
	to 40 then student is pass*/
	if (Grade_1 >= PASS && Grade_2 >= PASS && Grade_3 >= PASS)
	{
		cout << "\nAverage Grade: " << Average
			<< "\n\nYou Passed :-)" << endl;
	}
	/*logical operate indicate if one grade is less than 40,
	then test the average*/
	else if (Grade_1 < PASS || Grade_2 < PASS || Grade_3 < PASS)
	{
		cout << "\nAverage Grade: " << Average;
		/*if average is greater or equal to 50,
		then the student is pass
		otherwise, the student is fail*/
		cout << (Average >= 50 ? "\n\nYou Passed :-)"
			: "\n\nYou Failed :-(")
			<< endl;
	}
	/*showing the student is fail
	because student did not achieve the requirements above*/
	else
	{
		cout << "\nAverage Grade: " << Average
			<< "\n\nYou Failed :-(" << endl;
	}

	//statement saying the program is done
	cout << "\nDONE!" << endl;

	return 0;			//exit program
}