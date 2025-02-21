#include <stdio.h>

// Declares function

void temp(float F) {

	// Prints "(F) degress in Celsius is (C) degrees" using the formula (F-32)*(5.0/9.0)

	printf("%f degrees in Celsius is %f degrees", F, (F - 32) * (5.0 / 9.0));

}
int main() {

	// Declares variables

	float F ;
	float C ;

	// Asks and scans for user input

	printf("Enter a Fahrenheit value:");
	scanf("%f", &F);

	// Calls temp function

	temp(F);

	return 0;

}
