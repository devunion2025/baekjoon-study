```c
#include <stdio.h>

int main() {
    int N;  // 전화의 수
    int money = 0;  // 전화 요금

    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        int h, m, t;
        scanf("%d:%d %d", &h, &m, &t);

        int start = h * 60 + m;  // 시작 시각을 분 단위로
        for(int j = 0; j < t; j++) {
            int now = (start + j) % 1440;  // 하루가 지나면 0분으로 변경
            if(now >= 7*60 && now < 19*60) {  // 07:00 ~ 18:59
                money += 10;
            } else {
                money += 5;
            }
        }
    }

    printf("%d", money);
}
```
