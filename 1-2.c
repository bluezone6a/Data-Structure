#include<stdio.h>
#define rowSize 2
#define rallySize 3

int main(){

	int ary[rowSize][rallySize] = { {4,2,3},{5,2,3} };
	int(*p)[rallySize] = ary;
	int i,j;

	printf("ary를 이용한 출력\n");
	for (i = 0; i < rowSize; i++) { 
		for(j=0; j< rallySize; j++) printf("%d ", ary[i][j]);
		putchar('\n');
	}
	
	puts("\n");
	
	printf("p를 이용한 출력\n");
	
	for (i = 0; i < rowSize; i++) {
		for (j = 0; j < rallySize; j++)	printf("%d ", p[i][j]);
		putchar('\n');
	}
	return 0;
}