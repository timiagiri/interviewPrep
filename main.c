#include <stdio.h>

int main(void) {
  int sum = 0,i,x;
  for(i=0;i<10;i++){
    printf("Please enter a number: ");
    scanf("%d",&x);
    sum+=x;
  }
  printf("The final sum is %d",sum);
  return 0;
}