#include <stdio.h>
#define PI 3.14159

// Defines macro function

#define area(r) (4 * PI * r * r)

int main()
{
	// Declares variable
	
	float r=1.5 ;

	// Prints results

	printf("\n Area of a sphere = %g", area(r));

	return 0;
}
