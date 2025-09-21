## 문제
백준 1251번
설명: 주석 참고

```c
#include <stdio.h>
#include <string.h>

void reverse(char *str){                // 문자열 뒤집는 함수 (빈곳을 만들어 스위치하는 방식 사용)     
    int len = strlen(str);              // 문자열 길이 재는 함수(strlen <- string라이브러리에 저장된 함수(2번줄 참고))
    for(int i = 0; i < len / 2; i++){  
        char tmp = str[i];             // 임시 저장
        str[i] = str[len - 1 - i];    // 뒤쪽 문자 -> 앞쪽
        str[len - 1 - i] = tmp;       // 임시저장했던 앞쪽문자 -> 뒤쪽
    }
}

int main(){
    char word[51], best[51], part1[51], part2[51], part3[51], temp[200];   //문자열의 경우 끝을 알리는 문자열 \0이 들어가기에 51로 설정
    scanf("%s", word);                                                     // temp배열의 경우 넉넉하게 200 (의미없음)
    
    int len = strlen(word);
    best[0] = '\0';                              // 문자열 best배열 초기화
    
    for(int i = 1;i < len - 1; i++){            //최소 한글자 존재하기에 i는 1부터
        for(int j = i + 1; j < len; j++){       // 두번쨰 자르기는 i보다 뒤 시작 j = i+1
            strncpy(part1, word, i);            //part1 자르기 word[0]부터 word[i-1]
            part1[i] = '\0';                    // 끝표시
                
            strncpy(part2, word + i, j - i);    //part2 word[i]부터 word[j-1]
            part2[j - i] = '\0';                // 끝표시
            
            strcpy(part3, word + j);             //남은 부분 복사 word의 경우 마지막 부분이 \0이기에 별도의 끝표시X
            
            reverse(part1);              // 위에 만든 reverse함수 사용부분
            reverse(part2);
            reverse(part3);
            
            // 세 부분 합치기
            strcpy(temp, part1);        
            strcat(temp, part2);
            strcat(temp, part3);
            
            // 사전 순 비교부분 strcmp함수를 이용 (string헤더파일에 포함)
            if (best[0] == '\0' || strcmp(temp, best) < 0) {   // strcmp(a,b) < 0 이면 a가 앞선문자
                strcpy(best, temp);         //조건에 맞는다면 best 갱신
            }
        }
    }
    printf("%s\n", best);
    return 0;
}
```
