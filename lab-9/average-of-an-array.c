#include <stdio.h>

int main() {
	float A[] = {1.5, 2.5, 3.5, 4.5} ;

	int x, n = sizeof(A) / sizeof(A[0]);

	float sum = 0 ;

	for(x=0; x<n; x++) {

		sum += A[x] ;
	}

	sum = sum / (sizeof(A) / sizeof(A[0])) ;

	printf("average = %f", sum) ;

	return 0 ;
}
