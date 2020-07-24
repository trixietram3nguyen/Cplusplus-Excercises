//
//practice writing program to solve math problems
//

//preprovessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//
	//write program to solve for hypostenus of right triangle
	// 
	//declare input
	int a = 0, b = 0;
	//declare output
	float c = 0.0;

	//promt user
	cout << "Enter values for a and b: ";
	//read in a and b
	cin >> a >> b;

	//compute c
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));
	//print my result
	cout << "The value of c = " << c << endl;

	//
	//solving distance from distance formula
	//
	//declare input
	double x1(0.0), x2(0.0), y1(0.0), y2(0.0);
	//declare output
	double distance(0.0);

	//promt user
	cout << "Enter values for x1, x2, y1, and y2:";
	//read in values for x1, x2, y1, and y2
	cin >> x1 >> x2 >> y1 >> y2;

	//compute distance
	distance = sqrt(pow((x1 - x2), 2.0) + pow((y1 - y2), 2.0));

	//display my result
	cout << "\nDistance = " << distance << endl;

	//print statement saying you are done
	cout << "\nDone!" << endl;

	//
	//compute the total cost at a sales tax rate
	//
	//symbolic constant
	const float SALESTAX = 0.08;
	//declare input
	float price1=0.0, price2=0.0;
	//declare output
	float total(0.0), tax=0.0;

	//prom user
	cout << "\nEnter price1 and price2: ";
	//read in values for price1 and price2
	cin >> price1 >> price2;

	//compute the total price of 2 items at a salestaxe rate of 8%
	tax = SALESTAX * (price1 + price2);
	total = price1 + price2 + tax;

	//print my result
	cout << "Total = " << total << endl;

	//print statement saying you are done
	cout << "\nDone!" << endl;

	return 0;				//exit program
}