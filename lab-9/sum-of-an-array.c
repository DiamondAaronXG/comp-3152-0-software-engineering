#include <stdio.h>

int main() {

	// Initializes variables

	int t, x, i ;
	float sum = 0 ;

	// Asks for and scans user input for number of array elements

	printf("Enter the number of elements in the array: ");
	scanf("%d", &t);

	// Initializes array

	float arr[t] ;

	// Asks for and scans user input for array elements

	printf("Enter numbers for the array (Click enter after each entry): \n");
	for(i=0; i<t; i++) {
		scanf("%f", &arr[i]);
	}

	// Calculates the sum of all elements in the array

	for(x=0; x<t; x++) {
		sum += arr[x] ;
	}

	// Prints results

	printf("sum = %f", sum);

	return 0;
}
