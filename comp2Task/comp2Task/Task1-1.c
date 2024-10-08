//양의정수를 입력받아 그 수만큼 "Hello, world!"출력
#include <stdio.h>

int main() {
	int n;

	printf("반복할 수를 입력하세요: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("양의 정수를 입력하세요.");
		return 0;
	}

	for (int i = 0; i < n; i++) {
		printf("Hello, world!\n");
	}
	return 0;
}