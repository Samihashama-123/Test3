#include<stdio.h>
int main(){
    int i,n,arr[100];
    printf("Enter array size:");
    scanf("%d", &n);
    arr[n];
    printf("Enter array elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%4d\n", arr[i]);
    }
    int min;
        for(i=0; i<n; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
     int max=0;
    for(i=0; i<n; i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    printf("Minimum is: %d\n", min);
    printf("Maximum is: %d", max);
    return 0;
}