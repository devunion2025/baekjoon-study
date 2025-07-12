#include <stdio.h>

int main() {
    int A, B, C, D;
    // 첫 번째 바구니의 사과(A), 오렌지(B) 입력하는 코드
    scanf_s("%d %d", &A, &B);
    // 두 번째 바구니의 사과(C), 오렌지(D) 입력하는 코드
    scanf_s("%d %d", &C, &D);

    // 두 가지 경우 중 최소값 계산 코드
    int result1 = A + D; // 첫 번째 바구니에 오렌지, 두 번째 바구니에 사과를 옮기는 경우의 코드
    int result2 = B + C; // 첫 번째 바구니에 사과, 두 번째 바구니에 오렌지를 옮기는 경우의 코드

    // 최소 이동 횟수 출력 코드
    if (result1 < result2)
        printf("%d\n", result1);
    else
        printf("%d\n", result2);

    return 0;
}
