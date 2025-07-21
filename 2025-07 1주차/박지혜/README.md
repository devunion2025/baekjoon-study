```c
#include <stdio.h>

  int main() {
    int N;
    scanf("%d", &N);  // 통화 횟수 입력

    int total = 0;    // 전체 요금 합계

    while (N--) {
        int h, m, d;
        scanf("%d:%d %d", &h, &m, &d);  // 시간(HH:MM)과 통화 시간(분) 입력

        // 현재 시각을 '분' 단위로 변환 (예: 8시 30분 → 510분)
        int time = h * 60 + m;

        // 통화 시간 동안 1분 단위로 요금 계산
        for (int i = 0; i < d; i++) {
            int hour = (time / 60) % 24;  // 현재 시각의 '시'만 구함 (0~23 범위 유지)

            // 주간 요금: 07:00 ~ 18:59 → 10원
            // 야간 요금: 그 외 시간 → 5원
            if (hour >= 7 && hour < 19)
                total += 10;
            else
                total += 5;

            time = (time + 1) % 1440;  // 다음 분으로 이동 (자정 넘어가면 0으로 순환)
        }
    }

    // 최종 요금 출력
    printf("%d\n", total);
    return 0;
}

```
