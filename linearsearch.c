#include<stdio.h>
int main(){

    int num[]= {10,36,54,34,23};
    int value,pos=-1, i;
    printf("Enter the value you want to search: ");
    scanf("%d", &value);

    for(i=0;i<5;i++){

        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    
    }
    if(pos==-1){
        printf("Value is not found");
    }
        else {
        printf("Value is found at postition %d", pos);
    
    }
    return 0;
}