#include <stdio.h>

int main() {
	int N[3] = { 0 };
	int mid = 0;
	int i = 0;
	for (i = 0; i < 3; i++) scanf(" %d", &N[i]);
	for (i = 0; i < 2; i++) {
		if (N[i] > N[i + 1]) {
			mid = N[i];
			N[i] = N[i + 1];
			N[i + 1] = mid;
		}
	}
 // 좀 구린 방법이지만 그냥 세 개 차례차례 큰수 작은수 비교시키고,
	if (N[0] > N[1]) {
		mid = N[0];
		N[0] = N[1];
		N[1] = mid;
	}
 // 마지막으로 놓친 부분 잡기 위해서 N[0] N[1] 따로 비교시켰습니다.
	for (i = 0; i < 3; i++) printf("%d ", N[i]);

}
