/*아래를 출력
*
0*
00*
000*
0000*
*/
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("0");
		}
		printf("*\n");
	}
	return 0;
}