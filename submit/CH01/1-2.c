#include <stdio.h>

#define ROW_SIZE 2
#define COL_SIZE 3

int main(void)
{

	int ary[ROW_SIZE][COL_SIZE] = { {4,2,3},{5,2,3} };
	int(*p)[COL_SIZE] = ary;
	int i, j; //indexing �ϱ����� i�� j�� ����. i������ j�̰� 3���� �迭���� ���ԵǸ� k�� ó���Ѵ�.

	printf("ary�� �̿��� ���\n");
	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COL_SIZE; j++) 
			printf("%d ", ary[i][j]);
		putchar('\n');
	}
	puts("\n"); //���� ��Ʈ�� �����Ѵ�.

	printf("p�� �̿��� ���\n");
	for (i = 0; i < ROW_SIZE; i++) {
		for (j = 0; j < COL_SIZE; j++)	
			printf("%d ", p[i][j]);
		putchar('\n');
	}

	return 0;
}