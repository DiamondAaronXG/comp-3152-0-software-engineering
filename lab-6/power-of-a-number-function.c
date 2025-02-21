#include <stdio.h>

// Declares function

float eval(float base, int power) {

	// Decalres variable

	float result = 1 ;

	// If power equals 0

	if(power == 0) {

		// Returns 1

		return 1 ;
	}

	// If power is greater than zero

	else if(power > 0) {

		// Sets counter equal to zero, if counter is less than zero add one to the counter

		for(int counter = 0; counter < power; counter++) {

			// Result equal result * base
			
			result *= base;
		}

		// Returns result

		return result;
	}

	// If power is less than zero

	else {

		// Sers counter equal to zero, if counter is greater than power subtract one from counter

		for(int counter = 0; counter > power; counter--) {

			// Result equal result * (1/base)
			
			result *= (1/base);
		}

		// Resturns result
		
		return result;
	}

}

int main() {

	// Decalres variables
	
	float baseNumber, res;
	int power;

	// Asks and scans for user input

	printf("Enter a number for the base: ");
	scanf("%f", &baseNumber);
	
	printf("Enter an integer for the power: ");
	scanf("%i", &power);

	// Calls eval function

	res = eval(baseNumber, power);

	// Prints results along with baseNumber and power
	
	printf(" (%g)^(%i)=%g.\n", baseNumber, power, res);
	
	return 0;

}
