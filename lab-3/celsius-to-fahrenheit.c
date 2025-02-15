#include <stdio.h> 

int main()  
{ 

    // Declares variables
    
    int C , results ; 

    // Asks for and scans user input

    printf("Enter Celsius value: "); 
    scanf("%d", &C); 

    // Calculates fahrenheit

    results = (C * (9.0 / 5)) + 32; 

    // Prints results

    printf("F = %d", results); 

    return 0; 

} 
