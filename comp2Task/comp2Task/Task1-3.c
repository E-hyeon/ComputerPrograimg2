//������ ��� �Է��ؼ� ����(0�Է½� ����)
#include <stdio.h>

int main() {
	int n;
	int sum = 0;

	while (1) {
		printf("������ �Է��ϼ���: ");
		scanf_s("%d", &n);

		if (n == 0)
			break;

		sum += n;
	}
	printf("�Է��� ���� ��: %d\n", sum);

	return 0;
}