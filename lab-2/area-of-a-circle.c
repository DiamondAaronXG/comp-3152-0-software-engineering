#include <stdio.h>

int main()
{

  // Declares variables
  
  double r ;
  double pi = 3.141592653 ;
  double area ;

  // Asks for and scans user input
  
  printf("Enter the radius for the circle being calculated: ");
  scanf("%lf", &r);

  // Calculates area

  area = (pi * r * r);

  // Prints results

  printf(" r = %lf , area = %lf", r, area);

  return 0;
}
