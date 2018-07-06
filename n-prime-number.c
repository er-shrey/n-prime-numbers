#include <stdio.h>
#include <math.h>
int main(void) {
  int n;
  n=3;
  int i;
  i = 0;
  int count;
  count = 1;
  int flag;
  int finalCount;
  printf("\n Enter the number of prime numbers you want:");
  scanf("%d",&finalCount);
  printf("1. prime number: 2\n");
  do{
    flag = 0;
    for(i=2;i<=sqrt(n);i++){
      if(n%i==0){
        flag = 1;
        break;
      }
    }
    if(flag==0){
      printf("%d. prime number: %d\n", count+1, n);
      count++;
    }
    n++;
  }while(count<finalCount);
}
