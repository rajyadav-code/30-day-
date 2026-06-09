#include<stdio.h>
int main(){
   int n; 
  printf("enter a those number which table you want to print:");
  scanf("%d",&n);
  for( int i=0;i<=10;i++){
    int table=n*i;
    printf("%d*%d=%d \n",n,i,table);


  }
  return 0;
}