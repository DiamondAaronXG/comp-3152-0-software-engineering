#include <stdio.h>  

int main() { 
double firstnumber; 
double secondnumber; 
double answer; 
char operation;  

printf("Enter First Number: "); 
scanf("\n%lf", &firstnumber);  

printf("Enter Second Number: "); 
scanf("\n%lf", &secondnumber);  

printf("Enter Operation Type (+,-,/,*): "); 
scanf("\n%c", &operation);  

switch(operation){  

case '*': answer = firstnumber * secondnumber ;  
    printf("answer: %lf\n", answer);  
    break; 
     
case '/': answer = firstnumber / secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 
     
case '-': answer = firstnumber - secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 
     
case '+': answer = firstnumber + secondnumber ; 
    printf("answer: %lf\n", answer); 
    break; 
     
}  

return 0; 

}
