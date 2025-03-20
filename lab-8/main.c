#include <stdio.h>
#include "mylib.h"

int main(void) {

	float R1 = 10.0, R2 = 15.0;
	float C1 = 3.0, C2 = 6.0;
	float r = 2.0;

	float x1 = 9.0, x2 = 6.0, y1 = -2.0, y2 = 2.0;

	printf("\n  Resistors in series    = %g", rSer(R1, R2));
	printf("\n  Resistors in parallel  = %g", rPar(R1, R2));
	printf("\n  Capacitors in series   = %g", cSer(C1, C2));
	printf("\n  Capacitors in parallel = %g", cPar(C1, C2));
  
	printf("\n  The perimeter = %g", getPerimeter(r));
	printf("\n  The distance  = %g", getDis(x1, y1, x2, y2));

	return 0;
}
