#include <stdio.h> 

  

int main() { 

    float R1 , R2 , RS , RP ; 

    printf("Enter R1 value: "); 
    scanf("%f" , &R1); 

    printf("Enter R2 value: "); 
    scanf("%f" , &R2); 

    RS = (R1 + R2); 
    RP = (R1*R2)/(R1 + R2); 

    printf("Series = %f\n" , RS); 
    printf("Parallel = %f" , RP); 

    return 0; 

} 

 
