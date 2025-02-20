#include <stdio.h>

float minVal(float num1, float num2) {
	if(num1 < num2) {
		return num1 ;
	}

	else {

		return num2 ;
	}

}

int main() {
	float num1, num2, minValue;

	printf("Enter a number: ");
	scanf("%f", &num1);

	printf("Enter a second number: ");
	scanf("%f", &num2);

	minValue = minVal(num1, num2);
	printf("The minimum value of %g and %g is %g. \n", num1,num2, minValue);
	return 0;
}
