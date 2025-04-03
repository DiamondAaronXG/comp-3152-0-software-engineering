#include <stdio.h>
#include <math.h>

struct Point {
	float x ;
	float y ;
};

float Slope(struct Point p1, struct Point p2) {
	float deltax = p2.x - p1.x ;
	float deltay = p2.y - p1.y ;

	return deltay/deltax ;
}

float Dis(struct Point p1, struct Point p2) {
	float deltax = p2.x - p1.x ;
	float deltay = p2.y - p1.y ;
	return sqrt( (p2.y - p1.y) * (p2.y - p1.y) + (p2.x - p1.x) * (p2.x - p1.x) ) ;
}

int main() {

	struct Point point1, point2 ;

	printf("Enter the first coordinates: ");
	scanf("%f %f", &point1.x, &point1.y);

	printf("Enter the second coordinates: ");
	scanf("%f %f", &point2.x, &point2.y);

	float slope = Slope(point1, point2) ;
	float dis = Dis(point1, point2) ;

	printf("The slope is %f \n", slope) ;

	printf("The distance between the two points is %f", dis) ;
}

