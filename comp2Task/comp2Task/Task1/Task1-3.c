//정수를 계속 입력해서 더함(0입력시 종료)
#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	while (1) {
		printf("정수를 입력하세요: ");
		scanf_s("%d", &n);

		if (n == 0)
			break;

		sum += n;
	}
	printf("입력한 수의 합: %d\n", sum);

	return 0;
}
