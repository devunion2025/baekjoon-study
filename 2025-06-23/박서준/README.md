// 버블정렬(일부)을 이용한 세개의 숫자 정렬
#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int temp;

  // 첫번째와 두번째 비교
  if (a > b) {
      temp = a;
      a = b;
      b = temp;
  }

  // 첫번째와 세번째 비교
  if (a > c) {
      temp = a;
      a = c;
      c = temp;
  }

  // 두번째와 세번째 비교
  if (b > c) {
      temp = b;
      b = c;
      c = temp;
  }

  // 결과 출력
  printf("%d %d %d\n", a, b, c);

  return 0;
}
