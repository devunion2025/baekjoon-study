```
23739 문제 요약
챕터가 N개 있고, 각 챕터를 공부하는 데 T_i분이 걸림.
한 세션은 30분이며, 남은 시간은 다음 챕터로 이어짐.
챕터를 절반 이상 공부하면 성공한 챕터로 인정.
성공한 챕터 개수를 출력.

남은 시간 = 30으로 초기화
각 챕터마다 다음 판단:
  남은 시간 ≥ T: 완전하게 공부 → 성공
  남은 시간 * 2 ≥ T: 절반 이상 공부 → 성공
  그 외: 실패
챕터마다 판단 후 남은 시간이 0이면 30으로 리셋
```
```c
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int success = 0;
    int remaining = 30;

    for (int i = 0; i < N; i++) {
        int T;
        scanf("%d", &T);

        if (remaining >= T) {
            // 완전히 공부
            success++;
            remaining -= T;
        } else if (remaining * 2 >= T) {
            // 절반 이상 공부
            success++;
            remaining = 0;
        } else {
            // 절반도 못함
            remaining = 0;
        }

        if (remaining == 0) {
            remaining = 30;
        }
    }

    printf("%d\n", success);
    return 0;
}

```
