#include<stdio.h>
int main(){
    int i,n;
    long long fab=1;
    printf("enter a fab number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fab=fab*i;

    }
    printf("%d",fab);
    return 0;

}
