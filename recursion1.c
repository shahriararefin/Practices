#include<stdio.h>

int recursion (int n){
    if (n==0)
    return 1;

    else
    return (n*recursion(n-1));
}

int main(){
    int p=5,q;
    q=recursion(p);
    printf("%d", q);
}

/**
int sum(){
    int x=5, y=10;
    return x+y;
}

int main(){
    int p;
    p=sum();

    printf("%d",p);
}
**/