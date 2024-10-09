/*
max num: 7
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/

#include <stdio.h>

int main() {

	int max_num = 7;

	//위에 삼각형
	for (int row = 0; row < (max_num / 2) + 1; row++) {
		for (int i = 0; i < ((max_num / 2))-row; i++) {
			printf(" ");
		}

		for (int start = 0; start <= (2 * row); start++) {
			if (start==0 || start ==(2*row))
				printf("*");
			else 
				printf(" ");
		
		}
		printf("\n");

	}
	//밑에 삼각형
	for (int row = (max_num / 2) - 1; row >= 0; row--) {
		for (int i = 0; i < ((max_num / 2)) - row; i++) {
			printf(" ");
		}

		for (int start = 0; start <= (2 * row); start++) {
			if (start == 0 || start == (2 * row))
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}
	return 0;

}
