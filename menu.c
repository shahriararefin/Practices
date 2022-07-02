#include<stdio.h>
#include <stdlib.h>
int main(){

    int choice;
    float temp, converted_temp;

    printf(" Enter Your Choice: ");
    printf("\n");

    printf(" 1. Celcius To Fahrenheit: ");
    printf("\n");

    printf(" 2. Fahrenheit To Celcius: ");
    printf("\n");

    printf(" 3. Exit \n\n \n");

    printf(" Enter Your Choice: ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:
        printf(" Temp in Celsius: ");
        scanf("%f", &temp);
        converted_temp=(temp*9/5)+32;
        printf(" Temp in Fahrenheit: .2%f", converted_temp);
        break;
    
    case 2:
        printf(" Temp in Fahrenheit: \n");
        scanf("%f", &temp);
        converted_temp= (temp-32)*5/9;
        printf(" Temp in Celsius: .2%f\n", converted_temp);
        break;
    
    case 3:

        printf("\n Thanks for your time");
        exit(0);
        break;
    
    default:
    printf(" Wrong Input");
        break;
    }




    return 0;
}