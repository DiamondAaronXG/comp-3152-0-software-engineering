#include <stdio.h>  

int main()  
{ 

  // Declaring variables
  
  int x ; 
  int y ; 

  // Asks for and scans user input
    
  printf("Enter the first number: ");  
  scanf("%d" , &x);  
    
  printf("Enter the second number: ");  
  scanf("%d" , &y);  

  // If x is greater than y
    
  if(x>y){  

   printf("%d is the lesser number" , y);  
    }  

  // If y is greater than x
    
  else{  
    printf("%d is the lesser number" , x);  

    };  

  return 0;  
}  
