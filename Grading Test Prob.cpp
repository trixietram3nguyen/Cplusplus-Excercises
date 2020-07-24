//hw08.cpp
/*Tram Nguyen
May 01,2018
Write a program to grade a History T/F test of a class of 25 students.
Read in student's ID, student's answers from a file,
then print the scores and letter grade to a file.
Base on the key, for each right answer add 20 points, each wrong asnwer
minus 10 points, and each blank answer no points added or subtracted.
Use the formatting to format the outfile.
Write 2 functions to calculate the scores and the letter grade.
*/

//preprocessive directive 
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

//prototypes
int scores(string a, string k);
char Grade(int src);

//declare global constant variables for number of questions and students
const int QUESTIONS = 5;
const int STUDENTS = 25;

//main program 
int main()
{
	//declare variable and arrays
	string answer[STUDENTS], id[STUDENTS], data;
	int score[STUDENTS];
	char Lettergrade[STUDENTS];

	//declare input file and output file
	ifstream infile;
	ofstream outfile;

	//open input file and output file
	infile.open("input_8.txt");
	outfile.open("output_8.txt");

	//show the message having error opening input file
	if (!infile.good())
	{
		cout << "Error, input file could not be open!" << endl;
		exit(1);
	}

	//using getline to read the first line of the file
	getline(infile, data);
	//print it into the output file with formating 
	outfile << left << setw(10) << "Exam Key: "
		<< setw(6) << data << endl;

	//Format the title row of the grading table
	outfile << setw(15) << "Student ID"
		<< setw(11) << "Solution"
		<< setw(8) << "Score"
		<< setw(5) << "Grade";
	
	/*for loops to read in ID and answers 
	and print the scores and letter grades for 25 students*/
	for (int i = 0; i < STUDENTS; i++)
	{
		//getline to read student ID until #
		getline(infile, id[i], '#');
		//getline to read answers until newline
		getline(infile, answer[i], '\n');
		
		//call function scores to get score of the students
		score[i] = scores(data, answer[i]);

		//call function Grade to get letter grade of the students
		Lettergrade[i] = Grade(score[i]);

		//print student ID, answers, scores, and letter grade to output file with format
		outfile << setw(16) << id[i]
			<< setw(11) << answer[i]
			<< setw(8) << score[i]
			<< setw(5) << Lettergrade[i];
	}

	//close input file and output file
	infile.close();
	outfile.close();

	return 0;					//exit program
}

//function scores to calculate the score of the students
//take in string for k (key) and a (answer) then return int for scores
int scores(string k, string a)
{
	//declare scores variables and initialize
	int s = 0;

	//for loops to check 5 answers of students with the key answers
	for (int i = 0; i < QUESTIONS; i++)
	{
		//if the answer is right add 20 points
		if (a[i] == k[i])
		{
			s += 20;
		}
		//if the answer is blank add 0
		else if (a[i] == ' ')
		{
			s += 0;
		}
		//if none of the condition above apply which mean the answer is wrong minus 10 points
		else
		{
			s -= 10;
		}	
	}

	//return scores
	return s;
}

//function to define student letter grade
//taking int src(scores) then return char value
char Grade(int src)
{
	//use switch statement to define letter grade, by taking the score divide by 10
	switch (src / 10)
	{
	//when src / 10 = 10 or 9, return the letter grade A
	case 10:
	case 9:
		return 'A';
		break;
	//when src / 10 = 8, return the letter grade B
	case 8:
		return 'B';
		break;
	//when src / 10 = 7, return the letter grade C
	case 7:
		return 'C';
		break;
	//when src / 10 = 7, return the letter grade D
	case 6:
		return 'D';
		break;
	//default which anything beside the above, return letter grade F
	default:
		return 'F';
	}
}