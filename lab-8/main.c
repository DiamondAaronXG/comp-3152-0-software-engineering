#include <stdio.h>
#include "mylib.h"

int main(void) {

	// Declares variables
	
	float R1 , R2 ;
	float C1 , C2 ;
	float r ;
	float x1 , x2 , y1 , y2 ;

	// Asks and scans for user input for resistors

	printf("Enter a value for two resistors you would like to add in series and in parallel (Press enter after each entry): ");
	scanf("%f", &R1);
	scanf("%f", &R2);

	// Asks and scans for user input for capacitors
	
	printf("Enter a value for two capacitors you would like to add in series and in parallel (Press enter after each entry): ");
	scanf("%f", &C1);
	scanf("%f", &C2);

	// Asks and scans for user input for circle radius

	printf("Enter a radius value for the circle you would like to find the perimeter of: ");
	scanf("%f", &r);

	// Asks and scans for user input for two sets of x,y coordinates

	printf("Enter two sets of x,y coordinates you would like to find the distance between in the order of x1, y1, x2, y2 (Press enter after each entry)");
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	

	// Prints results from functions in "mylib.c"

	printf("\n  Resistors in series    = %g", rSer(R1, R2));
	printf("\n  Resistors in parallel  = %g", rPar(R1, R2));
	printf("\n  Capacitors in series   = %g", cSer(C1, C2));
	printf("\n  Capacitors in parallel = %g", cPar(C1, C2));
  
	printf("\n  The perimeter = %g", getPerimeter(r));
	printf("\n  The distance  = %g", getDis(x1, y1, x2, y2));

	return 0;
}
