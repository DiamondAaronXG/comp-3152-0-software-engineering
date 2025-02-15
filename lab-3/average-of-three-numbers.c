#include <stdio.h> 

int main() { 

    // Sets variables
    
    float firstnumber , secondnumber , thirdnumber , results; 

    // Asks for and scans user input

    printf("Enter first number: "); 
    scanf("%f" , &firstnumber); 

    printf("Enter second number: "); 
    scanf("%f" , &secondnumber); 

    printf("Enter third number: "); 
    scanf("%f" , &thirdnumber);    

    // Calculates results
    
    results = ((firstnumber + secondnumber + thirdnumber)/3); 

    // Prints results

    printf("(%f + %f + %f)/3 = %f" , firstnumber, secondnumber, thirdnumber, results); 

    return 0; 

} 
