#include<stdio.h>
int main(){

    int n,i,j=1;
    printf("How many time you want to print Hello World?\n");
    scanf("%d", &n);

    for (i=0;i<n;i++){

       
        printf("%d.",j);
        j++;

        printf(" Hello World\n",n);

        
    }


    return 0;

}