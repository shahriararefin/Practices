#include <stdio.h>
int main(){

    int num,i, flag=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=2; i<num; i++){
            if(num%i==0){
        flag=1;
        break;
            }
    }
    if(flag==1)
        printf("Prime Number\n");
    else
        printf("Not a Prime number\n");


return 0;
}