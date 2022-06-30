#include<stdio.h>
int main(){
    int n,sum=0.,remainder;

    printf("Enter five digit number: ");
    scanf("%d", &n);

    while(n!=0){
        remainder=n%10;
        sum+=remainder;
        n=n/10;
    }

    printf("Sum is: %d", sum);

    

    return 0;
}