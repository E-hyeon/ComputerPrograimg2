//9.�� ������ ������ ���� �������� �� ���(n1<n2)
#include <stdio.h>

int main() {
	int n1, n2;
	int sum = 0;

	printf("�� ������ �Է��Ͻÿ�(��, n1<n2): ");
	scanf_s("%d %d", &n1, &n2);

	if (n1 < n2) {
		while (n1 <= n2) {
			sum += n1;
			n1++;
		}
		printf("�� ���� ������ ��: %d", sum);
	}
	else
		printf("n2�� n1���� Ŀ����.\n");

	return 0;
}