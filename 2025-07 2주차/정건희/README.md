# 백준 11943
'''C
#include <stdio.h>
// 과일을 옮기는 최소 횟수 구해야 함.
// a+d / b+c 중에 더 작은 것 옮기면 됨
// -> min(a+d,b+c) -> 삼항연산자 ? 를 이용하여 한번에 처리
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d",a+d<b+c?a+d:b+c);
}
'''

# 백준 4998
'''C
#include <stdio.h>
//여러 개의 입력이므로 while scanf != EOF 사용
//이자율을 곱한 횟수 카운트 후 목표 금액을 넘은 순간 출력

int main(){
    double n,b,m;
    while (scanf("%lf %lf %lf",&n,&b,&m)!=EOF)
    {
        int c = 0;
        while (n < m){
            n *= (1+b/100);
            c++;
        }
        printf("%lld\n",c);
    }
}
'''
