#include<stdio.h>

int main(){
   int num,digit;
   int reverse=0;
   printf("enter your number");
   scanf("%d",&num);

   while(num>0){
    digit=num%10;
   
    reverse=(reverse*10)+(num%10);
     num=num/10;
   }
   printf("reverse number :%d",reverse);
   return 0;
}