#include <stdio.h>

float temp(float F) {

	return (F - 32) * (5 / 9);

}
int main() {

	float F ;
	float C ;

	printf("Enter a Fahrenheit value:");
	scanf("%f", &F);
	C = temp(F);
	printf("%f degrees in Celsius is %f degrees", F, C);

}
