//��޴��� �Է�-�� ����ŭ �����Է�-����� �Ҽ��� ��°�ڸ�����

#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int inputn;
	float avg;

	printf("���� �Է� ������? : ");
	scanf_s("%d", &n);

	printf("%d���� ������ �Է��ϼ��� : ",n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &inputn);
		sum += inputn;
	}

	avg = (float)sum / n;
	printf("��� : %.2f\n", avg);

	return 0;
	
}