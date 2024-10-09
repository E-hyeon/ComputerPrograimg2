//숫자를 입력하고 역순으로 나오는 구구단 출력

#include <stdio.h>

int main() {
	int n;

	printf("몇단을 출력할까요? : ");
	scanf_s("%d", &n);

	for (int i = 9; i >0; i--) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;
}
