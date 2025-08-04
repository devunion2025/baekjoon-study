#include <stdio.h>

int main() {
    int N, M;
    // N: 행의 개수, M: 열의 개수 입력 받기
    scanf("%d %d", &N, &M);

    // 최소 쪼개기 횟수는 N*M - 1
    printf("%d\n", N * M - 1);

    return 0;
}
