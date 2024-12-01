#include<stdio.h>
int main(){
    int arr[5];
     arr[0]=5;
     arr[1]=50;
     arr[2]=59;
     arr[3]=15;
     arr[4]=23;
     printf("%d\n", arr[0]);
     printf("%d\n", arr[1]);
     printf("%d\n", arr[2]);
     printf("%d\n", arr[3]);
     printf("%d\n", arr[4]);

    int byte = sizeof(arr);
    printf("%d byte\n", byte);
    //how many elements have
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Elements number is: %d\n", size);
    int sum = 0;
    for(int i=0; i<5; i++){
        sum = sum+arr[i];
    }
        printf("sum is: %d\n", sum);
    int average;
    for(int i=0; i<5; i++){
        average = sum/size;
    }
        printf("Average is: %d\n", average);

}