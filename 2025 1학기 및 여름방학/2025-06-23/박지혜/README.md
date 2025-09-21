```c
#include <stdio.h>
#include <string.h> //문자열 관련 함수
#include <ctype.h> //toupper() 함수를 쓰기 위해 필요 (소문자를 대문자로 바꿈)

int main(void) {
    char word[1000001];  // 최대 길이 1,000,000 + 널문자
    int alphabet[26] = {0}; // A~Z 카운트용 배열
    int max = 0; // 최대 등장 횟수 저장
    char result = '?'; // 결과로 출력할 알파벳, 기본은 '?' (동점 대비)

    // 입력 받기
    scanf("%s", word);

    // 알파벳 카운트
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = toupper(word[i]); // 대소문자 구분 X
        alphabet[ch - 'A']++; // A는 0, B는 1, ..., Z는 25에 대응
    }

    // 최빈 문자 찾기
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] > max) {
            max = alphabet[i];
            result = i + 'A'; // 숫자 → 문자 변환
        } else if (alphabet[i] == max) {
            result = '?'; // 동점이 있으면 '?'로 처리
        }
    }

    printf("%c\n", result);
    return 0;
}
```
