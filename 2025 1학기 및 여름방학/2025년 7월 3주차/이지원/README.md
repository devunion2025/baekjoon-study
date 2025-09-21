```c
#include <stdio.h>

int main ()
{
    char line[257];

    while (1)
    {
        fgets(line, sizeof(line), stdin); //입력 받는 코드

        if (line[0]=='#' && line[1]=='\n')  //입력 종료 조건 : '#' 글자만 있는 줄
        {
            break;
        }
    
        int count = 0;

        for (int i =0; line[i] != '\0'; i++)
        {
        char ch = line[i];

        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') //대소문자 모음 확인 코드
        {
            count++;
        }

        }

        printf("%d\n",count);
    
    }

    return 0;
}
