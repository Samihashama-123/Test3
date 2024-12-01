#include<stdio.h>
long Fibo(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return Fibo(n-1)+Fibo(n-2);
}
int main(){
    int n;
    printf("Enter the elment of n:");
    scanf("%d", &n);
    printf("\n %d The Fibonacci is: %d", n,Fibo(n));
    return 0;
}