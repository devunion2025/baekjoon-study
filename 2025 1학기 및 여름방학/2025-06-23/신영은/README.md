#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      
#include <stdlib.h>     // qsort() 함수를 사용하기 위한 헤더파일

// qsort가 두 요소를 비교할 때 사용하는 함수
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;  // 오름차순 정렬
}

int main(void) {
    int arr[3];  // 정수 3개를 저장할 배열 선언
    printf("정수를 입력하세요: ");
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    qsort(arr, 3, sizeof(int), compare);
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    return 0; 
}

