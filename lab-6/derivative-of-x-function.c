#include <stdio.h>

// Declares the function

double f(double x) {

	// If x equal 0 , return 1

	if(x == 0) {
		return 1 ;
	}

	// Else return (6x^2 +1)/(x(1-2x)

	else {
		return ((6 * x * x + 1)/(x * (1 - 2 * x))) ;
	}


}

// Declares derivative function


double diffY(double x, double epsilon) {

	// Returns (f(x+epsilon)-f(x)/epsilon where "f" is the previous function

	return (f(x + epsilon)-f(x)) / epsilon;


}

int main() {

	// Declares variables
	
	double x ;
	double epsilon = 1e-5;

	// Asks and scans for user input

	printf("Enter a value to find the derivative of: ");
	scanf("%lf", &x);

	// Prints the results of the diffY function along with the x value the user was asked for and the epsilon constant declared above

	printf("diffY(%lf, %lf)=%lf \n", x, epsilon, diffY(x, epsilon));

	return 0;
}
