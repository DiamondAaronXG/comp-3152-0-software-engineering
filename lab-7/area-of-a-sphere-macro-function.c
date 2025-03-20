#include <stdio.h>
#define PI 3.14159

// Defines macro function

#define area(r) (4 * PI * r * r)

int main()
{
	// Declares variable
	
	float r ;

	// Asks and scans for user input

	printf("Enter a value for the radius of your circle: ");
	scanf("%f", &r);

	// Prints results

	printf("\n The area of the sphere = %g", area(r));

	return 0;
}
