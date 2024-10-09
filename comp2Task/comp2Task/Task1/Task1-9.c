//9.두 정수를 포함한 사이 정수들의 합 출력(n1<n2)
#include <stdio.h>

int main() {
	int n1, n2;
	int sum = 0;

	printf("두 정수를 입력하시오(단, n1<n2): ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 < n2) {
		while (n1 <= n2) {
			sum += n1;
			n1++;
		}
		printf("두 정수 사이의 합: %d", sum);
	}
	else
		printf("n2가 n1보다 커야함.\n");

	return 0;
}
