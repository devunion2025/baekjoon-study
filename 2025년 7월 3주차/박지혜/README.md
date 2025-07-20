```
#include <stdio.h>
#include <string.h>

#define MAX_LINE 110  // 한 줄 최대 길이 (문제 조건: 100자 이내 + 여유)

int is_bug_sequence(char *str, int pos) {
    // 현재 위치에서 'BUG'가 있는지 검사
    return pos >= 2 && str[pos - 2] == 'B' && str[pos - 1] == 'U' && str[pos] == 'G';
}

int main(void) {
    char input[MAX_LINE];     // 입력 받을 원본 줄
    char clean_line[MAX_LINE]; // BUG 제거 후 저장할 문자열
    int top; // clean_line에서 현재 위치 (스택처럼 사용)

    // 파일 끝(EOF)까지 반복해서 줄 입력
    while (fgets(input, sizeof(input), stdin)) {
        top = -1; // 스택처럼 사용할 인덱스 초기화 (-1부터 시작)

        for (int i = 0; input[i] != '\0'; i++) {
            clean_line[++top] = input[i]; // 문자 하나씩 clean_line에 저장

            // 만약 최근 3글자가 "BUG"라면 제거
            if (top >= 2 && is_bug_sequence(clean_line, top)) {
                top -= 3; // 스택에서 BUG 제거 (top 위치 되돌리기)
            }
        }

        clean_line[top + 1] = '\0'; // 문자열 종료 처리
        printf("%s", clean_line);   // 결과 출력 (개행 포함됨)
    }

    return 0;
}
```
