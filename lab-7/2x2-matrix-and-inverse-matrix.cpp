#include <iostream>
#include <cmath>

using namespace std ;

// Sets class

class Matrix {

private:

	// Declares variables

	float a, b, c, d, detRes;

public:

	//Sets Constructor

	Matrix(float a1, float b1, float c1, float d1) {

		// Assigns values to variables passed from main

		a = a1;
		b = b1;
		c = c1;
		d = d1;

	}

	// Sets determinent function

	void det() {

		// Formula to calculate determinant from matrix

		detRes = (a*d - c*b) ;

		// Prints results

		cout << "|A| = " << detRes << endl;

	}

	// Sets function to find inverse matrix

	void inverse() {

		// Declares variables

		float A00, A01, A10, A11;

		// Formulas to calculate inverse matrix

		A00 = d/(a*d - b*c);
		A01 = -b/(a*d - b*c);
		A10 = -c/(a*d - b*c);
		A11 = a/(a*d - b*c);

		// Prints results

		cout << "A00 = " << A00 <<endl;
		cout << "A01 = " << A01 <<endl;
		cout << "A10 = " << A10 <<endl;
		cout << "A11 = " << A11 <<endl;

	}

	// Sets function to determine if matrix is singular

	void isSingular() {

		// If the matrix equals 0, output is 0

		if(detRes == 0) {
			cout << "Is singular? 1 "<< endl;
		}

		// If the matrix is not equal to 0, output is 1

		else {
			cout << "Is singular?: 0" << endl;
		}

	}

};

int main() {

	// Declares variables

	float a, b, c, d ;

	cout << " Enter value 1 for the matrix: " << endl;
	cin >> a ;

	cout << " Enter value 2 for the matrix: " << endl;
	cin >> b ;

	cout << " Enter value 3 for the matrix: " << endl;
	cin >> c ;

	cout << " Enter value 4 for the matrix: " << endl;
	cin >> d ;

	// Calls the Matrix class and passes variables

	Matrix m( a,  b,  c,  d);

	// Prints results

	m.det();
	m.inverse();
	m.isSingular();

	return 0;

}
