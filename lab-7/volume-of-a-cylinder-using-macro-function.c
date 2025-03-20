#include <stdio.h>
#define PI 3.14159
#define V(r,h) (PI * r * r * h)
int main()
{
	float r=2, h=1.5 ;

	printf("\n Volume of a cylinder = %g", V(r,h));

	return 0;
}
