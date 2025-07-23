# 백준 1996 지뢰찾기
``` C
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int mpsum(int** map,int x, int y,int n){
    int sum = 0;
    for (int i = -1; i < 2; i++){
        for (int j = -1; j < 2; j++){
            if(x+i >= 0 && x+i < n && y+j >= 0 && y+j < n) 
                sum += map[x+i][y+j];
        }
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    char *buff = (char*)malloc(sizeof(char)*n);
    int **mp = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        mp[i] = (int*)malloc(sizeof(int)*n);
        scanf("%s",buff);
        for (int j = 0; j < n; j++){
            if (isdigit(buff[j])){mp[i][j] = buff[j] - '0';}
            else mp[i][j] = 0;
        }
    }
    int **nmp = (int**)malloc(sizeof(int*)*n);
    for (int i = 0; i < n; i++){
        nmp[i] = (int*)malloc(sizeof(int)*n);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mp[i][j]) nmp[i][j] = 0;
            else nmp[i][j] = mpsum(mp,i,j,n);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (nmp[i][j] >= 10) putchar('M');
            else if (mp[i][j]) putchar('*');
            else printf("%d",nmp[i][j]);
        }
        putchar('\n');
    }
}
```
