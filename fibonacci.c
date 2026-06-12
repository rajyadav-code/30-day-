#include<stdio.h>
int main(){
    int num1,num2;
    int i;
    int next,first=0,second=1;
    printf("enter your starting number");
    scanf("%d",&num1);
    for(i=0;i<=num1;i++){
       if(i<=1){
           next=i;
       }
       else{
           next=first+second;
           first=second;
           second=next;
       }
       printf("%d\t",next);
    }
    return 0;
}