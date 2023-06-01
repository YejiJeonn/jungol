// 입력한 문자열에서 특정 배열 개수 찾기

#include <stdio.h>
#include <string.h>     // strlen(문자열 길이를 반환하는 함수)가 포함된 헤덮일

int main(){
  char arr[10001];
  int KOI=0, IOI=0;

  scanf("%s", arr);       // 배열이름자체가 주소값이기 때문에 &를 사용하지 않음
  
  for(int i=0; i<strlen(arr)-2; i++){
    if(arr[i]=='K' && arr[i+1]=='O' && arr[i+2]=='I'){
      KOI++;
    }
    else if(arr[i]=='I' && arr[i+1]=='O' && arr[i+2]=='I'){
      IOI++;
    }
  }

  printf("KOI = %d\nIOI = %d\n", KOI, IOI);

  return 0;
}
