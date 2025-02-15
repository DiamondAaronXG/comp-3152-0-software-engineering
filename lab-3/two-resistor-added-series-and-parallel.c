#include <stdio.h>   

int main() { 

    // Declares variables
  
    float R1 , R2 , RS , RP ; 

    // Asks for and scans user input

    printf("Enter R1 value: "); 
    scanf("%f" , &R1); 

    printf("Enter R2 value: "); 
    scanf("%f" , &R2); 

    // Calculates resistors in series

    RS = (R1 + R2); 

    // Calcukates resistors in parrallel
  
    RP = (R1*R2)/(R1 + R2); 

    // Prints results

    printf("Series = %f\n" , RS); 
    printf("Parallel = %f" , RP); 

    return 0; 

} 

 
