#include <stdio.h>
#define PI 3.14159

// Defines macro function

#define V(r,h) (PI * r * r * h)

int main()
{
	// Declares variables
	
	float r=2, h=1.5 ;

	// Prints results

	printf("\n Volume of a cylinder = %g", V(r,h));

	return 0;
}
