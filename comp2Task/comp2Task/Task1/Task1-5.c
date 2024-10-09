//몇개받는지 입력-그 수만큼 정수입력-평균을 소수점 둘째자리까지

#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	int inputn;
	float avg;

	printf("정수 입력 개수는? : ");
	scanf_s("%d", &n);

	printf("%d개의 정수를 입력하세요 : ",n);

	for (int i = 0; i < n; i++) {
		scanf_s("%d", &inputn);
		sum += inputn;
	}

	avg = (float)sum / n;
	printf("평균 : %.2f\n", avg);

	return 0;
	
}
