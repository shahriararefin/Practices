//print a pattern
#include<stdio.h>
int main(){

    int i,j,n=1,row=4;
    
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d ", n);
            n++;

        }
        printf("\n");
    }


    return 0;
}