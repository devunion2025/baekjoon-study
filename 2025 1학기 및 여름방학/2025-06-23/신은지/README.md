```C
#include <stdio.h>

int main() {
    int one, two, three;    // 숫자를 저장할 변수
    int tmp;    // 스위치를 위한 변수

    scanf("%d %d %d", &one, &two, &three);

    // 첫번째 숫자와 두번째 숫자 비교 후 정렬
    if (one > two) {
        tmp = one;
        one = two;
        two = tmp;
    }

    // 두번째 숫자와 세번째 숫자 비교 후 정렬
    if (two > three) {
        tmp = two;
        two = three;
        three = tmp;
    }

    // 두번째 숫자와 첫번째 숫자 비교 후 정렬
    if (one > two) {
        tmp = one;
        one = two;
        two = tmp;
    }
    
    printf("%d %d %d", one, two, three);

    return 0;
}
```
