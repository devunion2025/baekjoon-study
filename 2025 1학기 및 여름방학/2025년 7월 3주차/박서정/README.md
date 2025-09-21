#include <stdio.h>
#include <string.h>

int main() {
    char line[257]; // 한 줄 최대 255글자 + 널문자
    while (1) {
        fgets(line, sizeof(line), stdin); // 한 줄 입력받기
        // 입력이 '#' 한 글자만 들어오면 종료
        if (line[0] == '#' && (line[1] == '\n' || line[1] == '\0'))
            break;
        int count = 0;
        for (int i = 0; line[i] != '\0'; i++) {
            char ch = line[i];
            // 대소문자 구분 없이 모음 체크
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
