#include <stdio.h>  

int main() { 

    // Declares variables
    
    int integer ;
    
    // Asks and scans for user input
    
    printf("Enter an integer number to check divisibility: ");
    scanf("%i", &integer);
    
    // Checks if integer is divisble by 3 and by 5
    
    if( integer % 3 == 0 && integer %  5 == 0){
        
        // Prints results
        
        printf("The number is divisble by both 3 and 5");
    }
        else{
            printf("Number is not divisible by 3 and 5");
        }
    
    return 0;
}
