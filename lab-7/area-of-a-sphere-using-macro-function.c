#include <stdio.h>
#define PI 3.14159
#define area(r) (4 * PI * r * r)
int main()
{
	float r=1.5 ;

	printf("\n Area of a sphere = %g", area(r));

	return 0;
}
