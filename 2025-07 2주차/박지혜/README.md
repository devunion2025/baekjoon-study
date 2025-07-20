<pre><code>
#include <stdio.h>

int main(void) {
    double N, B, M;

    // 입력이 여러 줄이므로 EOF까지 반복
    while (scanf("%lf %lf %lf", &N, &B, &M) == 3) {
        int year = 0;       // 걸린 년 수
        double money = N;   // 현재 금액

        // 목표 금액 M을 초과할 때까지 이자 계산
        while (money <= M) {
            // 매년 복리로 이자 더하기
            money *= (1 + B / 100.0);
            year++;
        }

        // 결과 출력
        printf("%d\n", year);
    }

    return 0;
}
</code></pre>
