//for 반복문
#include <stdio.h>

int main() {
    int inputn;
    int sum = 0;

    for (int count = 1; count <= 5; ) {
        printf("입력할 %d번째 정수: ", count);
        scanf_s("%d", &inputn);

        if (inputn >= 1) {
            sum += inputn;
            count++;  
        }
        else {
            printf("다시 입력(1이상인 수).\n");
        }
    }

    printf("5개 수의 합: %d\n", sum);

    return 0;
}
