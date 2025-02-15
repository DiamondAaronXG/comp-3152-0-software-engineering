#include <stdio.h> 

int main() 
{ 

    // Declares variables
    
    float x , y=0 ; 

    // Asks and scans for user input
  
    printf("Enter x:"); 
    scanf("%f", &x); 

    // If x is less than 0

    if(x<=0){ 
      y=x*x ; 

    } 

    // If x is more than 5 and less than 0
 
    else if(x>0 && x<5){ 
      y=x+1 ;  

    } 

    // If x is equal to or more than 5
      
    else (x>=5){ 
      y=1/(x*x+1) ;  
    
    }; 

    // Print results

    printf("\n y = %f" , y); 

  return 0; 

} 
