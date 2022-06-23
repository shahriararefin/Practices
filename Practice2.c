/*Write a C program to get the following pattern.

1

2 3

4 5 6

7 8 9 10 */

#include<stdio.h>
int main(){
int n=1,rows=4,i,j;

for(i=1;i<=rows;i++){
  for(j=1;j<=i;j++){
    printf("%d ",n);
    n++;
  }
  printf("\n");
}


  return 0;
}