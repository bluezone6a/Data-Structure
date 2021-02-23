#include <stdio.h>

#define ROW_SIZE 2
#define COL_SIZE 3

int main(void)
{

	int ary[ROW_SIZE][COL_SIZE] = { {4,2,3},{5,2,3} };
	int(*p)[COL_SIZE] = ary;
	int i, j; //indexing 하기위해 i와 j를 쓴다. i다음에 j이고 3차원 배열까지 가게되면 k로 처리한다.

	printf("ary를 이용한 출력\n");
	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COL_SIZE; j++) 
			printf("%d ", ary[i][j]);
		putchar('\n');
	}
	puts("\n"); //같은 파트는 붙혀쓴다.

	printf("p를 이용한 출력\n");
	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COL_SIZE; j++)	
			printf("%d ", p[i][j]);
		putchar('\n');
	}

	return 0;
}
