#include <stdio.h>

int main() {

	// Initializes variables

	int x, t, i ;
	float max = 0 ;

	// Asks for and scans user input for number of elements in the array

	printf("Enter number of elements in the array: ");
	scanf("%d", &t);

	// Initializes array

	float arr[t] ;

	// Asks for and scans user input for array elements

	printf("Enter numbers for the array (Click enter after each entry): \n");
	for(i=0; i<t; i++) {
		scanf("%f", &arr[i]);
	}

	// Determines which array element is the largest

	for(x=0; x<t; x++) {
		if(max < arr[x]) {
			max = arr[x] ;
		}
	}

	// Prints results

	printf("max = %f", max);
	return 0;
}
