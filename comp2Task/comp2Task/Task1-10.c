//n!��� (n�� ��������)
#include <stdio.h>

int main() {
	int n;
	int factorial = 1;

	printf("n!�� ����� ����(n>0): ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("���� ������ �ƴ�.");
		return 1;
	}

	int i=1;
	while (i <= n) {
		factorial *= i;
		i++;
	}

	printf("n!�� �� : %d", factorial);

	return 0;
}