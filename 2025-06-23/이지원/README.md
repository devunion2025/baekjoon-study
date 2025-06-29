#include <stdio.h> // 라이브러리 함수 호출
#define _CRT_SECURE_NO_WARNINGS // Vs 2022로 작성하여 사용

int main() // 메인함수
{
	int n1, n2, n3; // 값을 입력 받을 변수 선언
	int saveN; // 값을 임시로 저장하기 위한 변수 선언

	printf("3개의 수를 입력하시오");
	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 > n2) // 첫번째 숫자와 두번쨰 숫자를 비교한 후 정렬
	{
		saveN = n1;
		n1 = n2;
		n2 = saveN;
	}

	if (n1 > n3) // 첫번째 숫자와 세번쨰 숫자를 비교한 후 정렬
	{
		saveN = n1;
		n1 = n3;
		n3 = saveN;
	}
	if (n2 > n3) // 두번째 숫자와 세번쨰 숫자를 비교한 후 정렬
	{
		saveN = n2;
		n2 = n3;
		n3 = saveN;
	}

	printf("%d %d %d\n", n1, n2, n3);  // 작은 순서대로 수를 출력

	return 0;
}
