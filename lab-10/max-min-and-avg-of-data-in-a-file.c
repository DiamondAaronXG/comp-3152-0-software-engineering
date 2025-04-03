#include <stdio.h>
int main()
{
    FILE *fp;
    float num[25] , max = -1e8 , min = 1e8 , avg, sum =0;
    int x ;
    int counter=0;
    char file_name[] = "grades.txt";
    char file_mode[] = "r";
    
    fp = fopen(file_name, file_mode);
    
    while(!feof(fp)){      
        fscanf(fp,"%g", &num[counter]);       
        printf("%g \n", num[counter]);
        counter++;
    }
    fclose(fp);
    
    // make sure the num array is not empty
    for(int i=0; i<25; i++) {
        printf("--> %g \n", num[i]);
    }
        
      for (x = 0; x < counter; x++) {
        if (max < num[x]) {
            max = num[x];
        }
        if (min > num[x]) {
            min = num[x];
        }
    }
    
    
	for(x=0; x<25; x++) {
		sum += num[x] ;
	}

    avg = sum / 25 ;
    
    
    /*
        num --> num*num  num[0] = num[0]*num[0]  e.g. 20.2*20.2 
       a new file (res.txt) is created containg new results  
    */    

    FILE *fpres;
    char file_name_res[] = "res.txt";
    char file_mode_res[] = "w";
    fpres = fopen(file_name_res, file_mode_res);
    
    if(fpres != NULL){
         fprintf(fpres, "Max: %g\n", max);
         fprintf(fpres, "Min: %g\n", min);
         fprintf(fpres, "Avg: %g\n", avg);
        
        fclose(fpres);
    }else{
        printf("Not able to create the file ! \n");
    }
    
    
    return 0;
}
