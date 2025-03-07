#include <iostream>
#include <cmath>

using namespace std ;

class Matrix {

private:

	float a, b, c, d, detRes;

public:

	Matrix(float a1, float b1, float c1, float d1) {

		a = a1;
		b = b1;
		c = c1;
		d = d1;

	}

	void det() {

		detRes = (a*d - c*b) ;

		cout << "|A| = " << detRes << endl;

	}

	void inverse() {

		float A00, A01, A10, A11;

		A00 = d/(a*d - b*c);
		A01 = -b/(a*d - b*c);
		A10 = -c/(a*d - b*c);
		A11 = a/(a*d - b*c);

		cout << "A00 = " << A00 <<endl;
		cout << "A01 = " << A01 <<endl;
		cout << "A10 = " << A10 <<endl;
		cout << "A11 = " << A11 <<endl;

	}

	void isSingular() {

		if(detRes == 0) {
			cout << "Is singular? 0 "<< endl;
		}
		else {
			cout << "Is singular?: 1" << endl;
		}

	}

};

int main() {

	Matrix m( 1,  2,  3,  4);
	m.det();
	m.inverse();
	m.isSingular();

	return 0;

}

