#include<stdio.h>
int main() {

    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);


    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    printf("Entered character %c is an Alphabet", ch);

    else
        printf("Entered character %c is not an Alphabet",ch);

}