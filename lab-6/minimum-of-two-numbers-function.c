#include <stdio.h>

// Declares function

float minVal(float num1, float num2) {

	// If num1 is less than num2
	
	if(num1 < num2) {

		// Returns num1
		
		return num1 ;
	}

	// If num1 is not less than num2

	else {

		// Returns num2

		return num2 ;
	}

}

int main() {

	// Declares variables
	
	float num1, num2, minValue;

	// Asks and scans for user input

	printf("Enter a number: ");
	scanf("%f", &num1);

	printf("Enter a second number: ");
	scanf("%f", &num2);

	// Calls minValue function
	
	minValue = minVal(num1, num2);

	// Prints results along wiht num1 and num2
	
	printf("The minimum value of %g and %g is %g. \n", num1,num2, minValue);
	
	return 0;
}
