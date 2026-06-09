#include<stdio.h>
int main(){
    int i,n,number;
    int count=0;
    printf("enter a number");
    scanf("%d",&number);
    while(number>0){
        number=number/10;
        count++;
    }
    printf("total number of digits=%d",count);
    return 0;

}