#include <stdio.h>

int main()
{
    float A[] = {2, 1.2, -4, 6, 3.2} ;
    int x , n = sizeof(A) / sizeof(A[0]); 
    float sum = 0 ;
    
    for(x=0; x<n; x++){
        sum += A[x] ;
    }
    
    printf("sum = %f", sum);

    return 0;
}
