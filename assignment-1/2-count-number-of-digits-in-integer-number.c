#include <stdio.h>  

int main() { 

    // Declares variables
    
    int integer , sum , counter = 0 ;
    
    // Asks and scans for user input
    
    printf("Enter an integer number to check the digits: ");
    scanf("%i", &integer);
    
    // If integer = 0 print digit = 1,
    
    if( integer == 0){
        printf("digits = 1");
        goto END ;
    }    
    
        // While integer is not equal to 0, divide integer by 10 and 1 to coumter each time
        
        else{
            while (integer != 0) {
        
                // Divides the ineger by 10
        
                integer /= 10;
        
                // Adds 1 to the counter
        
                counter++;
            }
        }
        
    // Print results
    
    printf("digits = %i", counter);
    
    END:
    
    return 0;
}
