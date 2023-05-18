// 구구단 출력
// 시작 하는 단과 끝나는 단 입력 후 구구단을 출력
// 시작단이 끝단보다 클 수 있다 , 출력은 가로로 출력되며 3칸 띄어서 구분

#include <stdio.h>

void up(int s, int e);
void down(int s, int e);

int main(){
  int s, e;

  // 입력이 2~9사이의 수가 아니라면 에러메시지 출력 후 재입력 하도록 반복문
  while(1){
    scanf("%d %d", &s, &e);
    if((s<2 || s>9) || (e<2 || e>9)){
      printf("INPUT ERROR!\n");
    }
    else{
      break;
    }
  }
  
  // 시작단과 끝단을 비교하고 비교한 값에 따라 반복문함수 선택
  if(s>e){
    down(s, e);
  }
  else if(s < e){
    up(s,e);
  }


  return 0;
}

void up(int s, int e){
  for(int i=1; i<=9; i++){
    for(int j=s; j<=e; j++){
      printf("%d * %d = %2d   ", j, i, i*j);
    }
    printf("\n");
  }
}

void down(int s, int e){
  for(int i=1; i<=9; i++){
    for(int j=s; j>=e; j--){
      printf("%d * %d = %2d   ", j, i, j*i);
    }
    printf("\n");
  }
}
