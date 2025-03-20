#include <stdio.h>

// Declares function

float temp(float F) {

	// Returns (F-32)*(5/9)

	return (F - 32) * (5 / 9);

}

int main() {

	// Declares variables

	float F ;
	float C ;

	// Asks and scans for user input

	printf("Enter a Fahrenheit value:");
	scanf("%f", &F);

	// Calls temp function
	
	C = temp(F);

	// Prints results
	
	printf("%f degrees in Celsius is %f degrees", F, C);

	return 0;

}
