``C

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int m1, m2, m3, m4;
	int ma1, ma2, ma3, ma4;
	int m_result = 0, ma_result = 0;

	printf("민국이의 점수를 4개 입력하시오:");
	scanf("%d %d %d %d", &m1, &m2, &m3, &m4);

	printf("만세의 점수를 4개 입력하시오:");
	scanf("%d %d %d %d", &ma1, &ma2, &ma3, &ma4);

	m_result = m1 + m2 + m3 + m4;
	ma_result = ma1 + ma2 + ma3 + ma4;

	if (m_result > ma_result)
	{
		printf("총점 : %d \n민국이의 점수가 더 큽니다", m_result);
	}
	else
	{
		printf("총점 : %d \n만세의 점수가 더 큽니다", ma_result);
	}

	return 0;

}
