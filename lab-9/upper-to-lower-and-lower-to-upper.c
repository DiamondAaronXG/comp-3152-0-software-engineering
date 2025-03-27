#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {
    char st1[] = "HeLlO wOrLd" ;
    int x=0 ;
    
     printf("Original String: %s \n", st1);
     
     while(st1[x]){
         if(islower(st1[x])){
             st1[x] = toupper(st1[x]) ;
         }
         
         else if(isupper(st1[x])){
             st1[x] = tolower(st1[x]) ;
         }
         
         x++ ;
     }
    
    printf("Modified String = %s", st1) ;
    
    return 0 ;
}
