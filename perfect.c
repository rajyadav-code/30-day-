#include<stdio.h>

int main(){
    int num,i;
    int sum=0;
    printf("enter a number");
    scanf("%d",&num);
     for(i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
     }}
     if(sum == num){
        printf("your number is perfect number\n%d",num);
     }
     else
     printf("your number is not a perfect number\n%d",num);
     return 0;

}
