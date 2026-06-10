#include<stdio.h>

int main(){
   int mul=1;
   int num,digit;
   printf("enter your number");
   scanf("%d",&num);

   while(num>0){
    digit=num%10;
    num=num/10;
    mul=mul*digit;
   }
   printf("sum of digits :%d",mul);
   return 0;
}