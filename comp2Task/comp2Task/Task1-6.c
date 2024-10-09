//5개 정수를 입력받아 그 수의 합출력(1이하 입력시 재입력)
#include <stdio.h>

int main() {
	int inputn;
	int sum = 0;
	int count = 1;

	while (count <= 5) {
		printf("입력할 %d번째 정수: ",count);
		scanf_s("%d", &inputn);

		if (inputn >= 1) {
			sum += inputn;
			count++;
		}
		else
			printf("다시 입력(1이상인 수).\n");
	}

	printf("5개 수의 합: %d", sum);
}