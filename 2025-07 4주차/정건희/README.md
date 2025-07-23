# 백준 1996 지뢰찾기
``` C
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 입력 -> 문자열 숫자로 변환 
// -> 각 자리마다 주변 지뢰 합 찾기(함수로 구현) -> 적절히 변환 후 출력


// n*n크기 map의 x,y 좌표 주변 지뢰를 찾는 함수
int mpsum(int** map,int x, int y,int n){
    int sum = 0;
    for (int i = -1; i < 2; i++){
        for (int j = -1; j < 2; j++){
            //n*n 범위 안에 있으면 합 구하기
            if(x+i >= 0 && x+i < n && y+j >= 0 && y+j < n) 
                sum += map[x+i][y+j];
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    // 값 입력
    // 처음에는 (int**)malloc(sizeof(int*)*n)를 사용했으나 자료형의 불일치로 실패
    // -> char형 버퍼를 만들어서 처리 후 숫자로 저장
    char *buff = (char*)malloc(sizeof(char)*n);

    int **mp = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        mp[i] = (int*)malloc(sizeof(int)*n);

        scanf("%s",buff);
        // 문자열 숫자로 변환
        for (int j = 0; j < n; j++){
            //숫자로 변환할 수 있으면 문자'0' 빼기
            if (isdigit(buff[j])){
                mp[i][j] = buff[j] - '0';
            }//아니면('.'이면) 0 넣기
            else mp[i][j] = 0;
        }
    }

    //출력할 2차원 배열
    int **nmp = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        nmp[i] = (int*)malloc(sizeof(int)*n);
    }

    //각 자리에서 지뢰 개수 세기
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            // 지뢰가 있는 곳은 주변 지뢰를 찾을 필요 x
            if (mp[i][j]) nmp[i][j] = 0;
            else nmp[i][j] = mpsum(mp,i,j,n);
        }
    }
    
    // 출력
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {   // 한 글자는 putchar로 출력
            if (nmp[i][j] >= 10) putchar('M');
            else if (mp[i][j]) putchar('*');
            else printf("%d",nmp[i][j]);
        }
        putchar('\n');
    }
}
```
