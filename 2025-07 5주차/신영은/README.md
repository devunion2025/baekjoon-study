#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);                  // (1) 테스트 개수 입력 받기
    for (int i = 1; i <= T; i++) {
        int A, B;
        scanf("%d %d", &A, &B);       // (2) 두 눈의 합구하기
        printf("Case %d: %d\n", i, A+B);  
    }
    return 0;
}
