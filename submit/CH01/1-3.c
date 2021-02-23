#include<stdio.h>
#define faceSize 2
#define rowSize 2
#define rallySize 3


int main() {

	int ary[2][2][3] = {
		{
			{1,2,3}, {4,5,6}
		},
		{
			{7,8,9}, {10,11,12}

		}
	};

	int(*p)[rowSize][rallySize] = ary;
	int x, y, z; //행 열 면
	
	printf("ary를 이용한 출력\n");
	for (z = 0; z < faceSize; z++) {
		for (x= 0; x < rowSize; x++) {
			for (y = 0; y < rallySize; y++) printf("%2d ", ary[z][x][y]);
			putchar('\n');
		}
	}
	
	puts("\n");

	printf("p를 이용한 출력\n");

	for (z = 0; z < faceSize; z++) {
		for (x = 0; x < rowSize; x++) {
			for (y = 0; y < rallySize; y++) printf("%2d ", p[z][x][y]);
			putchar('\n');
		}
	}

	return 0;
}
