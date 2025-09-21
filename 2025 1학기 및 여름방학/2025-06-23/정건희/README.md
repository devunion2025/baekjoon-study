# 백준 1157 풀이
주석 참고
``` C
#include<stdio.h>
#include<ctype.h> //toupper를 위해
int a[26],i,m,n;
int main(){
    char s[1000000]; // 단어의 길이는 1000000을 넘지 않음
    scanf("%s",&s);

    //문자열 살피면서 개수 세기
    while (s[i] != NULL){
    s[i] = toupper(s[i]);// 대소구분 없으므로 대문자로 통일

    // a는 알파벳 순서대로 개수를 담는 배열, ex) 0에는 'A'의 개수가 담겨야 함
    a[s[i]-'A']++;//s[i]에 있는 알파벳과 'A'의 아스키코드의 차를 이용하여 몇 번째 알파벳인지 구해서 넣음
    i++;
    }

    //최대 알파벳 구하고 n에 그 인덱스 저장
    for ( i = 0; i < 26; i++)
        if (m < a[i]) {m = a[i]; n = i;}

    // n 이후에 같은 개수가 있다면 '?' 출력 후 종료
    for ( i = n+1; i < 26; i++){
        if (m == a[i]) {printf("?"); return 0;}
    }

    //아니면 해당 알파벳 출력 후 종료
    printf("%c",n+65);//n은 인덱스,A는 아스키코드 65
    return 0;
}
```
