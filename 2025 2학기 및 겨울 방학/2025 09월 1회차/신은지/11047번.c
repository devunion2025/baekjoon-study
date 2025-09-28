#include <stdio.h>

int main() {

    int N = 0;
    int K = 0;
    scanf("%d %d", &N, &K);

    int arr[N]; 
    int count = 0;

    for(int i = 0; i<N; i++) {
        scanf("%d", &arr[i]); // 주어진 동전의 값들을 저장 
    }

    for(int i = N-1; i>=0; i--) { // 배열 거꾸로 실행
        count += K / arr[i];
      // 필요한 동전의 값을 몫으로 도출함
      // 큰 값부터 나누어서 필요한 동전의 최소값을 구함
        K = K % arr[i];
      // 계산 후에 값을 저장함
    }

    printf("%d", count);
    
    return 0;
}
