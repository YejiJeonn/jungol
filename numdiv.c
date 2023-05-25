// 정올 KOI 본선 2006 초2 - 숫자의 개수

#include <stdio.h>

int main(){
  int a,b,c;
  int sum=0, count=0;
  int t[10] = {0,};

  scanf("%d %d %d", &a, &b, &c);

  sum = a*b*c;
  printf("sum : %d\n", sum);

  while(1){
    count = sum%10;
    sum = sum/10;
    t[count] += 1;
    //printf("count : %d || sum = %d || t[%d] = %d\n", count, sum, count, t[count]);
    if(sum == 0){
      break;
    }
  }

  for(int i=0; i<10; i++){
    printf("%d\n", t[i]);
  }

  return 0;
}
