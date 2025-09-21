```C
#include <stdio.h>

int main() {
    double N, B, M;  // 저금액, 이자금리, 목표금액
    
    while (scanf("%lf %lf %lf", &N, &B, &M) == 3) {  // 입력받은 인수가 3개면 반복문 시작
        double now = N;  // 현재금액
        int count = 0;  // 년수 카운트

        B = B/100;  // 퍼센트 계산

        // 목표금액까지의 년수 카운트 반복문
        do {
            now = now + now*B;  // 이자더하기
            count++;  // 반복문 끝날때 +1년
            
        } while(now<M);  // now가 M보다 커지면 반복문 종료

        printf("%d\n", count);
    }
    return 0;
}
```
