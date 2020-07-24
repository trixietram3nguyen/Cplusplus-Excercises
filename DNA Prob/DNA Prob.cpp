//hw07.cpp
/*Tram Nguyen
Apr 19,2018
Write a program to read a DNA sequence file and determine the number of bases
with and without errors, number of errors, number of A, G, T, and C bases.
Then send the result to a file. Also, check for input file failure.
Graph the distribution of the 4 bases in the sequence.
Use the formatting to make the program look neat.
*/

//preprocessor directive
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//main program
int main()
{
	//declare variables that read the bases types
	int count = 0, a = 0, g = 0, t = 0, c = 0, n = 0, d = 0;
	//declare variables to read from thee file
	char bases = '0';

	//declare input and output file
	ifstream infile;
	ofstream outfile;

	//open input file: DNAsequence1
	infile.open("DNAsequence1.txt");
	//infile.open("DNAsequence2.txt");
	//infile.open("DNAsequence3.txt");

	//open output output file: DNAreport1
	outfile.open("DNAreport1.txt");
	//outfile.open("DNAreport2.txt");
	//outfile.open("DNAreport3.txt");

	//check input file failure using if statement
	if (!infile.good())
	{
		//let user know when the input file could not be read
		cout << "Error, input file cannot be open!" << endl;
		//exit the program
		exit(1);
	}

	//print the statement to the DNA report file
	outfile << "\nREPORT on DNA Sequence" << endl << endl;

	//use while loop to count the bases in the DNA sequence file
	while (infile >> bases)
	{
		//count the total of bases in the file including errors
		count++;

		//using switch statement to count individual bases A, G, T, C and error N
		switch (bases) 
		{
		//count base A
		case 'a':
			a++;
			break;
		//count base G
		case 'g':
			g++;
			break;
		//count base T
		case 't':
			t++;
			break;
		//count base C
		case 'c':
			c++;
			break;
		//count error N
		case 'n':
			n++;
			break;
		}
		//compute the total of bases exclude the error by taking the total bases minus the total errors
		d = count - n;
	}
	
	/*using formating to line up the bases and the number of the bases
	set the sentence on the left with the width of 35 and
	the total number of the bases on the right with the width of 5*/
	//print the total number of bases with errors
	outfile << left << setw(35) << "Total number of bases with errors: " << right << setw(5) << count << endl;
	//print the total number of bases without errors
	outfile << left << setw(35) << "Total number of bases: " << right << setw(5) << d << endl;
	//print the number of errors
	outfile << left << setw(35) << "Number of errors: " << right << setw(5) << n << endl;
	//print total number of base A
	outfile << left << setw(35) << "Total number of A: " << right << setw(5) << a << endl;
	//print total number of base G
	outfile << left << setw(35) << "Total number of G: " << right << setw(5) << g << endl;
	//print total number of base T
	outfile << left << setw(35) << "Total number of T: " << right << setw(5) << t << endl;
	//print total number of base G
	outfile << left << setw(35) << "Total number of C: " << right << setw(5) << c << endl;

	//print statement Graph of Base Distribution
	outfile << "\nGraph of Base Distribution" << endl;
	outfile << setw(50) << setfill('*') << "*" << endl << endl;

	//use formatting to graph base A
	outfile << setfill(' ') << left << setw(2) << 'A'
		<< setw(2) << '|'
		//set the width of base A for the graph is the total number of base A divide by 100
		<< setw(a / 100) << setfill('A') << 'A'
		<< endl;

	//use formatting to graph base G
	outfile << setfill(' ') << left << setw(2) << 'G'
		<< setw(2) << '|'
		//set the width of base G for the graph equal to the total number of base G divide by 100
		<< setw(g / 100) << setfill('G') << 'G'
		<< endl;

	//use formatting to graph base C
	outfile << setfill(' ') << left << setw(2) << 'C'
		<< setw(2) << '|'
		//set the width of base C for the graph is the total number of base C divide by 100
		<< setw(c / 100) << setfill('C') << 'C'
		<< endl;

	//use formatting to graph base T
	outfile << setfill(' ') << left << setw(2) << 'T'
		<< setw(2) << '|'
		//set the width of base T for the graph is the total number of base T divide by 100
		<< setw(t / 100) << setfill('T') << 'T'
		<< endl;

	//close the input and output file when done with the program
	infile.close();
	outfile.close();

	return 0;					//exit program
}