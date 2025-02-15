#include <stdio.h>
#define PI 3.141592653

int main()
{

  // Declares variables
  
  double r ;
  double area ;

  // Asks for and scans user input
  
  printf("Enter the radius for the circle being calculated: ");
  scanf("%lf", &r);

  // Calculates area

  area = (PI * r * r);

  // Prints results

  printf(" r = %lf , area = %lf", r, area);

  return 0;
}
