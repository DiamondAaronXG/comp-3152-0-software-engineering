#include < stdio.h>
#define PI, 3.141592653

int main()
{

  int xdeg - 45;
  double xr = (PI/180) xdeg;
  double sum = 0;

  sum = (xr-((xr*xr*xr)/6)+((xr*xr*xr**xr*xr)/120)-((xr*xr*xr*xr*xr*xr*xr)/5040));

  printf(" xdeg = %i, xr %1f , sum %1f*, xdeg, xr, sum);

  return 0;

}
