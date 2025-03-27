#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

	// Initializes variables and string

	char st1[100] ;
	int x=0 ;

	// Asks for and saves user input for string

	printf("Enter a string: ");
	fgets(st1, sizeof(st1), stdin);

	// Prints inputed string

	printf("Original String: %s \n", st1);

	while(st1[x]) {

		//Changes all lower case to upper case withing string

		if(islower(st1[x])) {
			st1[x] = toupper(st1[x]) ;
		}

		//Changes all upper case to lower case within string

		else if(isupper(st1[x])) {
			st1[x] = tolower(st1[x]) ;
		}

		x++ ;
	}

	// Prints results (modified string)

	printf("Modified String = %s", st1) ;

	return 0 ;
}
