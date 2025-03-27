#include <stdio.h>

int main() {

	// Initializes variables and string

	char st1[100], c ;
	int counter = 0, i ;

	// Asks for and scans user input for string and character to check repitition of

	printf("Enter a string: ");
	scanf("%s", st1 );

	printf("Enter a character: ");
	scanf(" %c", &c);

	// Checks how many times the chosen character appears in the string

	for(i = 0; st1[i] != '\0'; i++) {
		if(st1[i] == c) {
			counter++ ;
		}
	}

	// Prints results

	printf("# of repeated %c's is %d", c, counter);

	return 0 ;

}
