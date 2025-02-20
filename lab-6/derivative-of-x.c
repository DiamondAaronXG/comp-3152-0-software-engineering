#include <stdio.h>

float f(float x) {

	if(x == 0) {
		return 1 ;
	}

	else {
		return ((6 * x * x + 1)/(x * (1 - 2 * x))) ;
	}


}


float diffY(float x, float epsilon) {

	return ( ( (f(x + epsilon)-f(x)) / epsilon) ) ;


}

int main() {
	float x, epsilon;
	epsilon = 0.00001;
	x = 0.0;
	printf("f(%g)=%g \n", x, f(x));
	x = 1000.0;
	printf("f(%g)=%g \n", x, f(x));
	x = 1.0;
	printf("diffY(%g, %g)=%g \n", x, epsilon, diffY(x, epsilon));
	return 0;
}
