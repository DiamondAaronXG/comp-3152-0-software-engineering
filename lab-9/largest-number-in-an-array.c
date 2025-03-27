#include <stdio.h>

int main()
{
    float A[5] = {2, 9.3, -4, 6, 3.2} ;
    int x ;
    float sum = 0 ;
    
    for(x=0; x<5; x++){
        if(sum > A[x]){
            sum = sum ;
        }
            
        else{
            sum = A[x] ;
        }
    }

    printf("sum = %f" , sum) ;
    return 0;
}
