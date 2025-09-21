```c
#include <stdio.h>
#include <string.h>

int main() {
    char arr[257];

    // fgets로 arr를 입력받으면 while문 실행
    while (fgets(arr, sizeof(arr), stdin)) {

        // arr가 #인 경우 종료
        if (arr[0] == '#')
            break;

        int count = 0; // 개수 카운트

        // \n 전까지 개수 세기
        for (int i = 0; arr[i] != '\n'; i++) {
            char c = arr[i];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
```
