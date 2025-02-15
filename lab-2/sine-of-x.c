#include <stdio.h>
#define PI 3.141592653

int main()
{

  // Declares variables

  int xdeg ;
  double xrad ;
  double radestimation ;

  // Asks for and scans user input
  
  printf("Enter a value for x in degress: ");
  scanf("%i", &xdeg);

  // Calculates the radian value of the given degree value

  xrad = (PI/180) * xdeg ;

  // Estimates a radian value of the given degree value using Taylor Series
  
  radestimation = (xrad-((xrad*xrad*xrad)/6)+((xrad*xrad*xrad*xrad*xrad)/120)-((xrad*xrad*xrad*xrad*xrad*xrad*xrad)/5040));

  // Prints results
  
  printf("x in degrees = %i, x in radians = %lf , radian estimation = %lf" , xdeg, xrad, radestimation);

  return 0;

}
