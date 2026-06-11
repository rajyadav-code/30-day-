#include<stdio.h>

int main(){
    int num,i;
    int flag=1;
    printf("enter your number ");
    scanf("%d",&num);
    if(num<=1){
        flag=0;
    }
    else{
    for(i=2;i<(num/2);i++){
        if(num%2==0){
            flag=0;
            break;
        }}}
    
    if(flag==0){
         printf("entered number is not a prime number .its a composite number:%d",num);
    }
    else{
        printf("entered number is  a prime number:%d",num);
    }
    return 0;
}