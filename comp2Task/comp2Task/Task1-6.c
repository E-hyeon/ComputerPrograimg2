//5�� ������ �Է¹޾� �� ���� �����(1���� �Է½� ���Է�)
#include <stdio.h>

int main() {
	int inputn;
	int sum = 0;
	int count = 1;

	while (count <= 5) {
		printf("�Է��� %d��° ����: ",count);
		scanf_s("%d", &inputn);

		if (inputn >= 1) {
			sum += inputn;
			count++;
		}
		else
			printf("�ٽ� �Է�(1�̻��� ��).\n");
	}

	printf("5�� ���� ��: %d", sum);
}