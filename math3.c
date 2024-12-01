#include<stdio.h>
int Q(int j, int k){
    if(j<k)
        return 5;
        else
        return Q(j-k, k+2)+j;
}
int main(){
    int j,k;
    printf("Enter the value of j:");
    scanf("%d", &j);
    printf("Enter the value of k:");
    scanf("%d", &k);
    printf("\n output: %d", Q(j,k));

}