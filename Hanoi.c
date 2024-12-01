#include<stdio.h>
void ToH(int n, char Beg, char Aux, char End){
    if(n==1){
        printf("\n Move Disk 1 from peg %c to peg %c", Beg, End);
        return;
    }
    ToH(n-1, Beg, End, Aux);
    printf("\n Move Disk %d from peg %c to peg %c", n,Beg,End);
    ToH(n-1, Aux, Beg, End);
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    ToH(n, 'A', 'B', 'c');
    return 0;
}