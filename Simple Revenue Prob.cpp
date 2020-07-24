//hw05_q1.cpp
/*Tram Nguyen
Mar 22,2018
Write a program that output the number of boxes of cookies sold,
the total revenue, and the average number of boxes sold by 5 students.
Allow user to enter the StudentID and the number of boxes sold.
Notice: the number of students is given in this problem
Test with sample run*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare constant variable which is the cost of each box of cookies was $4.50
	const double EACH = 4.50;
	//declare input variables and intialize to zero
	int student = 0, ID = 0, boxes = 0, total_boxes = 0;
	//declare output variables
	double total_rev = 0.0, aveg = 0.0;

	/*use for loop which show the ID, number of boxes sold,
	total revenue, and average of boxes sold of 5 students*/
	//set value of student to equal 1
	for (student = 1; student <= 5; student++)
	{
		//promt user to enter ID for student then read in
		cout << "\nEnter ID for student " << student << " : ";
		cin >> ID;

		//promt user to enter number of boxes sold according to student's ID then read in
		cout << "Enter number of boxes sold by " << ID << " : ";
		cin >> boxes;

		//calculate the total boxes sold by 5 students
		total_boxes += boxes;
		//calculate the total revenue 
		total_rev = EACH * total_boxes;
		//calculate the average of boxes sold by 5 students
		aveg = (total_boxes) / 5.0;
	}

	//print total revenue and average of boxes sold by 5 students
	cout << "\nTotal Revenue = $" << total_rev << endl;
	cout << "Average Boxes Sold by 5 students = " << aveg << endl;

	//statement saying the program is done.
	cout << "\nDone" << endl;

	return 0;			//exit program
}