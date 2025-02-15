#include <stdio.h>  

int main() 
{ 

    // A label used for in conjunction with goto
    
    START: 

    // Declaring variables
    
    int num ;  

    // Asks for and scans user input

    printf("Enter a number to check: ");  
    scanf("%d", &num);  

    //switch case determining if a number is odd or even
    
    switch(num % 2){  
      case 0:  
        printf("Number is Even \n");  
        break;  
          
      case 1:  
        printf("Number is Odd \n");  
        break;  
    }  

    // This statement restarts the code from "START:"
    
    goto START; 

    return 0;  
} 
