#include<stdio.h>
int main(){

    int n,even, odd;

    printf("Enter a number: ");
    scanf("%d", &n);


    if(n%2==0){
        printf("Entered Number Is Even: %d",n);
    
    }

    else{
        printf("Entered number is Odd: %d",n);
    }

    return 0;
}