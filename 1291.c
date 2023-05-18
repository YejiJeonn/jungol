// 구구단 출력
// 시작단과 끝단을 입력받음 -> 시작단이 입력단보다 클 수 있음
// 서로 다른 단을 3칸 띄워서 출력할 것 ex) 4 * 1 = 4   3 * 1 = 3

#include <stdio.h>

int main(){
  int s, e;

  while(1){
    scanf("%d %d", &s, &e);
    if((s<2 || s>9) || (e<2 || e>9)){
      printf("INPUT ERROR!\n");
    }
    else{
      break;
    }
  }
  
  for(int i=1; i<=9; i++){
    if(s<e){
      for(int j=s; j<=e; j++){
        printf("%d * %d = %2d   ", j, i, i*j);
      }
      printf("\n");
    }
    else if(s>e){
      for(int j=s; j>=e; j--){
        printf("%d * %d = %2d   ", j, i, j*i);
      }
      printf("\n");
    }
  }
  
  return 0;
}
