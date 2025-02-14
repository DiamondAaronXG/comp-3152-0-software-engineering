#include <stdio.h>  

int main() 
{ 

    START: 
    int num ;  

    printf("Enter a number to check: ");  
    scanf("%d", &num);  

    switch(num % 2){  
      case 0:  
        printf("Number is Even \n");  
        break;  
          
      case 1:  
        printf("Number is Odd \n");  
        break;  
    }  
    
    goto START; 

    return 0;  
} 
