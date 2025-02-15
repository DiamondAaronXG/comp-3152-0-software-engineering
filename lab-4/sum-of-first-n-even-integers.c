#include <stdio.h> 

int main() 
{ 

  // Declaring variables

  int n; 
  int sum = 0; 
  int counter = 2; 

  // Asks for and scans user input

  printf("Enter n:"); 
  scanf("%d", &n); 

  // For counter equals 1, if counter is greater than n, add 1 to the counter

  for (counter = 1; counter <=n; counter++) 

    { 

      //sum equals sum + (2 times counter)
    
      sum += 2*counter; 
    
    } 

  // Print results
  
  printf("\n sum = %d\n", sum); 

  return 0; 

} 
