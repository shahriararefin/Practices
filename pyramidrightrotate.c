#include <stdio.h>  

int main()  {
    int i, j, rows=7;

  
    for (i = 1; i <=rows; i++)  
    {  
        for (j = 1; j <= i; j++)  
        {  
            printf( " 1");  
        }  
        printf("\n");  
    }  

    for ( i = 1; i <=rows; i++)
    {
        for(j=1;j<=rows-i;j++){
        printf(" 5");
        }
        printf("\n");
    }
    
    return 0;
}