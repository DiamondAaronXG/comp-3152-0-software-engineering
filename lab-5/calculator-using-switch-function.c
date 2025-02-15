#include <stdio.h>  

int main() { 

// Declares variables
    
double firstnumber; 
double secondnumber; 
double answer; 
char operation;  

// Asks for and scans user input

printf("Enter First Number: "); 
scanf("\n%lf", &firstnumber);  

printf("Enter Second Number: "); 
scanf("\n%lf", &secondnumber);  

printf("Enter Operation Type (+,-,/,*): "); 
scanf("\n%c", &operation);  

// Switch case to caluclate using chosen operation

switch(operation){  

// Multiplies firstnumber and secondnumber

case '*': answer = firstnumber * secondnumber ;  
    printf("answer: %lf\n", answer);  
    break; 

// Divides firstnumber and secondnumber
     
case '/': answer = firstnumber / secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 

// Subtracts secondnumber from firstnumber
     
case '-': answer = firstnumber - secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 

// Adds secondnumber to firstnumber
     
case '+': answer = firstnumber + secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 
     
}  

return 0; 

}
