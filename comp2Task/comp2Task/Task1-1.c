//���������� �Է¹޾� �� ����ŭ "Hello, world!"���
#include <stdio.h>

int main() {
	int n;

	printf("�ݺ��� ���� �Է��ϼ���: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("���� ������ �Է��ϼ���.");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("Hello, world!\n");
	}
	return 0;
}