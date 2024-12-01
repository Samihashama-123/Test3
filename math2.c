#include<stdio.h>
int L (int n){
    if(n==1)
        return 0;
    else
        return L(n/2)+1;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\n output is: %d", L(n));
}