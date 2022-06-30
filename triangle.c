#include<stdio.h>
#include<math.h>
int main(){

    double a,b,c,area,s;

    printf("Enter 3 angle: ");
    scanf("%lf %lf %lf", &a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area is: %.2lf", area);

    return 0;
}