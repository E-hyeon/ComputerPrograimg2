//양의 정수를 입력해 3의 배수를 그 수만큼 출력

#include <stdio.h>

int main() {
	int n;

	printf("3의 배수를 출력할 개수를 입력하시오.");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("양의정수를 입력하시오:");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d", i * 3);
	}
	return 0;
}