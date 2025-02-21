#include <stdio.h> 

int main(){ 

    // Declares variables 

    int integer , counter ;
    int sum = 1 ;

    // Asks and scans for user input 

    printf("Enter an integer number: "); 
    scanf("%i", &integer); 

    // For counter = 0, if counter is less than integer, subtract one from counter 

    for(counter = 0 ; counter < integer; counter++){ 

    // Sum equal sum times (ineger minus counter) 

        sum *= (integer - counter); 

    } 

    // Prints results 

    printf("sum = %i", sum); 

    return 0; 

} 
