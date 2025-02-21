#include <stdio.h>

int main() {

	// Defines variables

	double nonzero ;
	double sum = 1 ;
	int power ;
	int counter ;


	// Asks and scans for user input

	printf("Enter a non-zero real number: ");
	scanf("%lf", &nonzero);

	printf("Enter an integer number for the power: ");
	scanf("%i", &power);

	// If power equals 0, sum equals 1

	if(power == 0) {

		sum = 1 ;
	}

	// If power is greater than 0

	else if(power > 0) {

		// Sets counter equal to 0. If counter is less than power add 1 to counter


		for(counter = 0; counter<power; counter++) {

			// Sum equals sum multiplied by nonzero

			sum *= nonzero;
		}
	}

	// If power is less than 0

	else {

		// Sets counter equal to 0.  If counter is greater than power subtract 1 from counter

		for(counter = 0; counter>power; counter--) {

			// Sum equals sum multiplied by (1 divided by nonzero)

			sum *= (1/nonzero);

		}
	}

	printf("sum = %lf", sum);

}
