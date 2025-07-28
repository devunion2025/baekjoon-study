# [Silver V] 아시아 정보올림피아드 - 2535
``` C
#include <stdio.h>
#include <stdlib.h>

// 참가국 | 학생 | 점수 구조체 생성
// qsort로 비교
// 커스텀 비교함수로 구조체 비교
// 출력 전에 매달 최대개수 검사

//구조체
struct table{
    int nat;
    int stu;
    int scr;
};
// 비교함수 (점수 기준 내림차순)
int comp(const void *a, const void *b){
    return ((struct table*)b)->scr - ((struct table*)a)->scr;
}

int main(){
    int n;
    scanf("%d",&n);
    //구조체 동적배열 생성
    struct table *tp = (struct table*)malloc(sizeof(struct table)*n);
    for (int i = 0; i < n; i++)
        scanf("%d %d %d",&(tp[i].nat),&(tp[i].stu),&(tp[i].scr));
    // 정렬
    qsort(tp,n,sizeof(struct table),comp);

    int cnt[101] = {0}; // 각 국가의 수상자 수 (국가 번호는 1 이상 100 이하)
    int prnt = 0;
    // 출력
    for (int i = 0; i < n && prnt < 3; i++){
        if (cnt[tp[i].nat] < 2){
            printf("%d %d\n", tp[i].nat, tp[i].stu);
            cnt[tp[i].nat]++;
            prnt++;
        }
    }
}
```
