//n!계산 (n은 양의정수)
#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	printf("n!을 계산할 정수(n>0): ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("양의 정수가 아님.");
		return 1;
	}

	int i=1;
	while (i <= n) {
		factorial *= i;
		i++;
	}

	printf("n!의 값 : %d", factorial);

	return 0;
}
