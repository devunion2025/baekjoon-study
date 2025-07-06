#include <stdio.h>

int main() {
    int min_score[4]; // 민국이의 점수를 저장할 배열 코드
    int man_score[4]; // 만세의 점수를 저장할 배열 코드
    int S = 0, T = 0; // S: 민국이 총점, T: 만세 총점
    int i;

    // 민국이 점수 입력받는 코드
    for (i = 0; i < 4; i++) {
        scanf_s("%d", &min_score[i]);
        S += min_score[i]; // 민국이 총점 계산 코드
    }

    // 만세 점수 입력받는 코드
    for (i = 0; i < 4; i++) {
        scanf_s("%d", &man_score[i]);
        T += man_score[i]; // 만세 총점 계산 코드
    }

    // 둘 중 큰 점수를 출력, 같으면 민국이 점수 출력하는 코드
    if (S >= T)
        printf("%d\n", S);
    else
        printf("%d\n", T);

    return 0;
}
