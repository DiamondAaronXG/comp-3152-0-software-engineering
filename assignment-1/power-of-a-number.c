#include <stdio.h>

int main(){
    
    // Defines variables
    
    double nonzero ;
    double sum = 1 ;
    int power ;
    int counter ;
    
    
    // Asks and scans for user input
    
    printf("Enter a non-zero real number: ");
    scanf("%lf", &nonzero);
    
    printf("Enter an integer number for the power: ");
    scanf("%i", &power);
    
    // Sets counter equal to 0. If counter is less than power add 1 to counter
    
    for(counter = 0; counter<power; counter++){
        
        // Sum equals sum multiplied by nonzero
        
        sum *= nonzero;
    }
    
    // Prints results
    
    printf("sum = %lf", sum);
    
    return 0;
}
