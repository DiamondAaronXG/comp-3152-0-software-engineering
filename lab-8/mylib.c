#include <stdio.h>
#include <math.h>

float rSer(float R1,float R2) {

	return (R1 + R2);

}

float rPar(float R1,float R2) {

	return (R1 * R2) / (R1 + R2);

}

float cSer(float C1,float C2) {

	return (C1 * C2) / (C1 + C2);

}

float cPar(float C1,float C2) {

	return (C1 + C2);

}

float getDis(float x1,float y1,float x2,float y2) {

	return sqrt( (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) );

}
