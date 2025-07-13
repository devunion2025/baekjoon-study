## 문제
백준 2669번
설명: 배열을 통한 카운터 방식을 사용(채택 이유: 이미 마킹 되어있다면 기존배열에 영향을 주지 않아 중복처리에 유용하다 생각)
      1. 정사각형 입력
      2. 해당 area 1마킹
      3. 1 카운팅
```c
#include <stdio.h>

int main() {
    int matrix[101][101] = {0}; 

    for (int i = 0; i < 4; i++) {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                matrix[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int x = 0; x <= 100; x++) {
        for (int y = 0; y <= 100; y++) {
            if (matrix[x][y] == 1)
                area++;
        }
    }

    printf("%d\n", area);
    return 0;
}
```
