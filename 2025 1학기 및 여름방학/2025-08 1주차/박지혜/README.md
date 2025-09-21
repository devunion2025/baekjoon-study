```c
#include <stdio.h>
#include <stdlib.h>

/* qsort에서 사용할 비교 함수
 * 내림차순 정렬을 위해 (b - a) 를 반환
 */
int desc_cmp(const void *pa, const void *pb) {
    int a = *(const int*)pa;
    int b = *(const int*)pb;
    return (b - a);  // b가 크면 양수 -> b가 앞(내림차순)
}

int main(void) {
    int T;                 // 테스트 케이스 수
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int arr[10];       // 각 케이스마다 10개의 정수
        for (int i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }

        // 내림차순으로 정렬
        qsort(arr, 10, sizeof(int), desc_cmp);

        // 3번째로 큰 수는 인덱스 2에 위치
        printf("%d\n", arr[2]);
    }
    return 0;
}
```
