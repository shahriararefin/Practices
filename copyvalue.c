#include<stdio.h>
int main(){

    int arr1[5]= {12,43,32,45,65};
    int arr2[5];
    int i;

    printf("Array 1 is: ");

    for(i=0;i<5;i++){
        printf("%d ", arr1[i]);

    }

    printf("\n");
    for(i=0;i<5;i++){
        arr2[i]=arr1[i];
    }

     printf("Array 2 is: ");

   for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }

    return 0;
}