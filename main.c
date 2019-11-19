#include <stdio.h>
int sum_of_odd(int n);

int main(void) {
  // int sum = 0,i,x;
  // for(i=0;i<10;i++){
  //   printf("Please enter a number: ");
  //   scanf("%d",&x);
  //   sum+=x;
  // }
  // printf("The final sum is %d",sum);
  int sum = sum_of_odd(10);
  printf("The sum of all odd numbers entered is %d",sum);
  return 0;
}

int sum_of_odd(int n){
  int j,k,sum2 = 0;
  for(j=0;j<n;j++){
      printf("Please enter a number: ");
      scanf("%d",&k);
      if(k%2!=0){
        sum2+=k;
      }
  }
  return sum2;
}