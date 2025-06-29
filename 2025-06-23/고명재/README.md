문제: 세수정렬
정수 세 개가 주어졌을 때, 가장 작은 수, 그 다음 수, 가장 큰 수를 출력하는 프로그램
해결책: 파이썬 sort사용, c는 내장sort없어서 직접 비교 후 정렬
#include <stdio.h>

int main() {
    int a, b, c, chang;
    scanf("%d %d %d", &a, &b, &c);
    //a,b비교 후 교환 a,c비교 후 교환 b,c비교 후 교환
    if (a > b) { chang = a; a = b; b = chang; }
    if (a > c) { chang = a; a = c; c = chang; }
    if (b > c) { chang = b; b = c; c = chang; }

    printf("%d %d %d\n", a, b, c);
    return 0;
}
