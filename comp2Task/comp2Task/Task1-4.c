//���ڸ� �Է��ϰ� �������� ������ ������ ���

#include <stdio.h>

int main() {
	int n;

	printf("����� ����ұ��? : ");
	scanf_s("%d", &n);

	for (int i = 9; i >0; i--) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}