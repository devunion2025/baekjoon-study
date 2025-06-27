```C
#include <stdio.h>

int main() {
    int one, two, three;
    int tmp;

    scanf("%d %d %d", &one, &two, &three);

    첫번째 숫자와 두번째 숫자 비교 후 정렬
    if (one > two) {
        tmp = one;
        one = two;
        two = tmp;
    }

    두번째 숫자와 세번째 숫자 비교 후 정렬
    if (two > three) {
        tmp = two;
        two = three;
        three = tmp;
    }

    두번째 숫자와 첫번째 숫자 비교 후 정렬
    if (one > two) {
        tmp = one;
        one = two;
        two = tmp;
    }
    
    printf("%d %d %d", one, two, three);

    return 0;
}
```
