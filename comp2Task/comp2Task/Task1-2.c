//���� ������ �Է��� 3�� ����� �� ����ŭ ���

#include <stdio.h>

int main() {
	int n;

	printf("3�� ����� ����� ������ �Է��Ͻÿ�.");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("���������� �Է��Ͻÿ�:");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d", i * 3);
	}
	return 0;
}