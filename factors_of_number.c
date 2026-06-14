#include<stdio.h>

int main(){
    int num,i;
    int sum=0,fact=1;
    int digit;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i == 0){
            printf("%d\t",i);
        }
 
    }
    printf("= factors of %d",num);
     return 0;

}