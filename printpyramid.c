#include<stdio.h>
int main(){

    int n=0,i,j,rows;
    
    printf("Enter row number: ");
    scanf("%d", &rows);
    

    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
           printf(" ");

        }
        for ( j = 1; j<=i; j++){
            printf(" *");

        }
        printf("\n");
       
    }

    return 0;
}