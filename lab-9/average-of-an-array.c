#include <stdio.h>

int main() {

	// Initializes variables

	int t, i ;
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

	// Finds the sum of all array elements

	for(i=0; i<t; i++) {

		sum += arr[i] ;
	}

	// Finds the average of all array elements

	sum = sum / t ;

	//Prints results

	printf("average = %f", sum) ;

	return 0 ;
}
