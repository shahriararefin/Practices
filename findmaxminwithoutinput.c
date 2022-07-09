#include<stdio.h>
int main(){

    int arr[5]={21,45,43,23,34};
    int i,max,min;

//find minimum value

    min=arr[0];
for(i=1;i<arr[i];i++){
    

    if(min>arr[i])
        min=arr[i];   
}
 printf("Minimum array value is %d", min);
  printf("\n");


//find maximum value

    max=arr[0];
for(i=1;i<arr[i];i++){
    

    if(max<arr[i])
        max=arr[i];
}

    printf("Maximum array value is %d", max);


    return 0;
}