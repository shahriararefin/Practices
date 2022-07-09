#include<stdio.h>
int main(){

    int arr[5];
    int n,i,max,min;

//taking range from the user

    printf("Enter the range of array: ");
    scanf("%d", &n);
    printf("\n");

//taking user input into the array

    printf("Enter different integer values: ");

    for(i=0;i<n;i++){
     scanf("%d", &arr[i]);   
    }
//find minimum value

    min=arr[0];
for(i=1;i<n;i++){
    

    if(min>arr[i])
        min=arr[i];   
}
 printf("Minimum array value is: %d", min);
  printf("\n");


//find maximum value

    max=arr[0];
for(i=1;i<n;i++){
    

    if(max<arr[i])
        max=arr[i];
}

    printf("Maximum array value is: %d", max);


    return 0;
}