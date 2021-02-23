#include <stdio.h>

#define TENS_SIZE 2
#define ROW_SIZE 2
#define COL_SIZE 3

int main(void)
{
	int ary[TENS_SIZE][ROW_SIZE][COL_SIZE] = {{
			{1,2,3}, {4,5,6}
		},{
			{7,8,9}, {10,11,12}
		}
	};

	int (*p)[ROW_SIZE][COL_SIZE] = ary; 
	int i, j, k; 

	printf("ary를 이용한 출력\n");
	for (i = 0; i < TENS_SIZE; i++) {
		for (j = 0; j < ROW_SIZE; j++) {
			for (k = 0; k < COL_SIZE; k++) 
				printf("%2d ", ary[i][j][k]);
			putchar('\n');
		}
	}
	puts("\n");

	printf("p를 이용한 출력\n");
	for (i = 0; i < TENS_SIZE; i++) {
		for (j = 0; j < ROW_SIZE; j++) {
			for (k = 0; k < COL_SIZE; k++) 
				printf("%2d ", p[i][j][k]);
			putchar('\n');
		}
	}

	return 0;
}
