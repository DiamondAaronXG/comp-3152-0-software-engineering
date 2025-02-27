#include <stdio.h>
#define PI 3.141592653

int main()
{

  // Declares variables

  int xdeg ;
  double xrad ;
  double sinestimation ;

  // Asks for and scans user input
  
  printf("Enter a value for x in degress: ");
  scanf("%i", &xdeg);

  // Calculates the radian value of the given degree value

  xrad = (PI/180) * xdeg ;

  // Estimates the evaluated sine trig function
  
  sinestimation = (xrad-((xrad*xrad*xrad)/6)+((xrad*xrad*xrad*xrad*xrad)/120)-((xrad*xrad*xrad*xrad*xrad*xrad*xrad)/5040));

  // Prints results
  
  printf("x in degrees = %i, x in radians = %lf , sine estimation = %lf" , xdeg, xrad, sinestimation);

  return 0;

}
