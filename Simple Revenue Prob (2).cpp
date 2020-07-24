//hw05_q2.cpp
/*Tram Nguyen
Mar 22,2018
Write a program that output the number of boxes of cookies sold,
the total revenue, and the average number of boxes sold by some students.
Allow user to enter the StudentID and the number of boxes sold.
Notice: the number of students is not in this problem,
        therefore let user enter -1 to end of the date entered.
Test with sample runs*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare constant variable which is the cost of 1 boxe of cookies is $4.50
	const double EACH = 4.50;
	//declare input variables and give an initialize value
	int student = 1, ID = 0, boxes = 0, total_boxes = 0;
	//declare output variables
	double total_rev = 0.0, aveg = 0.0;

	/*let users know that they can enter as much
	student's ID and number of boxes as they wish
	and finish entering data by enter -1*/
	cout << "Enter student's ID and number of boxes or enter \"-1\" to finish entering data.";

	/*use while loop to let user enter student's ID 
	and number of boxes sold over and over again
	then stop the loop if ID is equal -1*/
	while (ID != -1)
	{
		//promt user to enter ID for student and read in
		cout << "\nEnter ID for student " << student << " : ";
		cin >> ID;

		/*use if statement to let user enter number of boxes 
		if ID is not -1, then increase value of student by 1*/
		if (ID != -1)
		{
			//promt student to enter number of boxes sold and read in
			cout << "Enter number of boxes sold by " << ID << " : ";
			cin >> boxes;

			//calculate the total of boxes
			total_boxes += boxes;
			//calculate the total revenue
			total_rev = EACH * total_boxes;
			//calulate the average number of boxes sold
			aveg = (total_boxes) / double(student);

			//increment the value of student by 1
			student++;
		}//end the if statement
	}//end while loop

	//decrement of student by 1
	student--;

	//print the total revenue and the average of boxes sold by students
	cout << "\nTotal Revenue = $" << total_rev << endl;
	cout << "Average Boxes Sold by "<< student << " students = " 
		<< aveg << endl;

	//statement saying the program is done
	cout << "\nDone" << endl;

	return 0;			//exit program
}