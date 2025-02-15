#include <stdio.h> 

int main(){ 

  // Declares variable
  
  int dayofweek; 

  // Asks for and scans user input

  printf("Enter a numerical value for a day of the week: "); 
  scanf("%d", &dayofweek); 

  // Switch case to correlate numerical day of the week value to the day of the week
    
  switch(dayofweek) { 

    case 1: 
    printf("\n Sunday"); 
    break; 

    case 2: 
    printf("\n Monday"); 
    break; 

    case 3: 
    printf("\n Tuesday"); 
    break; 

    case 4: 
    printf("\n Wednesday"); 
    break; 
      
    case 5: 
    printf("\n Thursday"); 
    break; 
      
    case 6: 
    printf("\n Friday"); 
    break; 
      
    case 7: 
    printf("\n Saturday"); 
    break; 
    
   } 
  return 0; 
} 
