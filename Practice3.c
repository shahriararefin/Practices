/*  A company insures its drivers in the following cases:

i.    If the driver is married.

ii.   If the driver is unmarried, male & above 30 years of age

iii.  If the driver is unmarried, female and above 25 years of age.

In all other cases, the driver is not insured. The marital status, sex, and age are the input which will be taken from user.


Write a C program to determine whether the driver is to be insured or not. */

#include<stdio.h>
int main(){
    int marital_status, sex, age, married, unmarried,male,female;

    printf("Enter the marital status of the driver: ");
    scanf("%d", &marital_status);

    printf("Enter sex Male or Female: ");
    scanf("%d", &sex);

    printf("Enter the age of the driver: ");
    scanf("%d", &age);

    if(marital_status==married){
        printf("The driver is insured.");
        else if(sex==male){
            printf("The driver is insured.");
            
            else if(unmarried==male && age>=30){
                printf("The driver is insured.");
                else if(unmarried==female && age>=25){
                    printf("The driver is insured.");
                }
            }
            
        }
    }
    else    {
        printf("The driver is not insured.");
    }


    return 0;
}
