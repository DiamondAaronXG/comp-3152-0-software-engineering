#include <stdio.h>

float eval(float base, int power) {

	float result = 1 ;

	if(power == 0) {

		return 1 ;
	}

	else if(power > 0) {

		for(int counter = 0; counter < power; counter++) {
			result *= base;
		}

		return result;
	}



	else {

		for(int counter = 0; counter > power; counter--) {
			result *= (1/base);
		}
		return result;
	}

}

int main() {
	float baseNumber, res;
	int power;

	printf("Enter a number for the base: ");
	scanf("%f", &baseNumber);
	printf("Enter an integer for the power: ");
	scanf("%i", &power);

	res = eval(baseNumber, power);
	printf(" (%g)^(%i)=%g.\n", baseNumber, power, res);
	return 0;

}
