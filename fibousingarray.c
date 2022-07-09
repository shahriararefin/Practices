//Fibonacci using an array
#include<stdio.h>
int main(){

    int arr[100];
    int i,j,fibo,n;

// taking terms from user
    printf("Enter First Term: ");
    scanf("%d", &arr[0]);
    printf("Enter Second Term: ");
    scanf("%d", &arr[1]);

    printf("\n");

//Taking range
    printf("Enter the fibonacci range: ");
    scanf("%d", &n);

//Printing series using for loop

for(i=2;i<n;i++){ 
    arr[i]=arr[i-1]+arr[i-2];
} 

    for(i=0;i<n;i++){
    printf("%d ",arr[i]);
    }

    return 0;
}