#include<stdio.h>
long fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\n %d the factorial is: %d", n,fact(n));
}