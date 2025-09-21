## 문제
백준 1476번
설명: 주석 참고

```c
#include <stdio.h>

int main(){
    int E,S,M,year;
    int e,s,m;
    scanf("%d %d %d",&E , &S, &M);        //입력
    
    year = 1;
    while(1){
        e = (year % 15 == 0) ? 15 : year % 15;      //나머지 연산을 이용한 주기 
        s = (year % 28 == 0) ? 28 : year % 28;      //예외사항:나머지 연산으로 딱 떨어질 경우 0이 아닌 S의 경우 15로 간주해야함
        m = (year % 19 == 0) ? 19 : year % 19;      //이 코드의 경우 삼항 연산자를 사용하여 조건 판단을 IF문 없이 처리
                                                    //삼항 연산자: 조건식 ? 참일 때 결과 : 거짓일 때 결과
        if (e == E && s == S && m == M) {
            break;                                  //원하는 결과를 찾은 경우 break를 통해 빠져 나옴
        }
        year++;
    }
    printf("%d\n", year);
    return 0;
}
```
