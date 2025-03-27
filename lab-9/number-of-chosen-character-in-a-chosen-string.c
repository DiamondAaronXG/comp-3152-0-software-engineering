#include <stdio.h>

int main() {

	char st1[100], c ;

	int counter = 0, i ;

	printf("Enter a string: ");

	scanf("%s", st1 );

	printf("Enter a character: ");

	scanf(" %c", &c);

	for(i = 0; st1[i] != '\0'; i++) {

		if(st1[i] == c) {

			counter++ ;
		}

	}

	printf("# of repeated %c's is %d", c, counter);

	return 0 ;

}
