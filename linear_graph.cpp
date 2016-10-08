#include <iostream>
#include <math.h> // round()
using namespace std;
int main(){

	double m, b;
	
	cout <<"\nm = ";
	cin >>m;
	cout <<"b = ";
	cin >>b;

	long int xMin, xMax;
	cout <<"\nx-min = ";
	cin >>xMin;
	cout <<"x-max = ";
	cin >>xMax;

	// going from highest to lowest
	if (xMin > xMax) {
		long int minCpy = xMin;
		xMin = xMax;
		xMax = minCpy;
	}

	// print a number of bricks coresponding to the output
	for (; xMin <= xMax; xMin++) {
		// print the domain value
		cout <<std::endl <<xMin <<"\t: ";
		long int range = round(m * xMin + b);

		// print the sign and 
		if (range == 0) // value is zero
			cout <<"(0)";

		
		else if (range > 0) {

			cout << "(+) ";

			for (; range > 0; range--)
				cout <<"█";
		
		} else {
			cout << "(-) ";

			for (; range < 0; range++)
				cout <<"█";
		}

	}

	cout <<std::endl;
}
