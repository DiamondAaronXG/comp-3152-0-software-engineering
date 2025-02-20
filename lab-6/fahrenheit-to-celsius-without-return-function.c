#include <stdio.h>

void temp(float F) {

	printf("%f degrees in Celsius is %f degrees", F, (F - 32) * (5.0 / 9.0));

}
int main() {

	float F ;
	float C ;

	printf("Enter a Fahrenheit value:");
	scanf("%f", &F);
	temp(F);


}
