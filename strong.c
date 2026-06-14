#include<stdio.h>

int main(){
    int num,i;
    int sum=0,fact=1;
    int digit;
    printf("enter a number");
    scanf("%d",&num);
    int temp=num;
    while(num>0){
        digit=num%10;
        fact=1;
        while(digit>0){
            fact=fact*digit;
            digit--;
        }
        sum+=fact;
        num=num/10;
    }
     if(sum == temp){
        printf("your number is strong number\n%d",temp);
     }
     else
     printf("your number is not a strong number\n%d",temp);
     return 0;

}