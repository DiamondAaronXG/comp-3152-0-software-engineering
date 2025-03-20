#include <stdio.h>
#define PI 3.14159

// Defines macro function

#define V(r,h) (PI * r * r * h)

int main()
{
	// Declares variables
	
	float r, h ;

	// Asks and scans for user input

	printf("Enter the radius of the cylinder: ");
	scanf("%f", &r);

	printf("Enter the height of the cylinder: ");
	scanf("%f", &h);

	// Prints results

	printf("\n Volume of a cylinder = %g", V(r,h));

	return 0;
}
