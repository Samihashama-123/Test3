#include<stdio.h>
int H(int N){
    if(N<5)
    return 3*N;
    else 
    return 2*H(N-5)+7;
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\n output: %d", H(n));
}