#include <stdio.h>

#define ABC_SIZE 3

int main(void) 
{

	int i, a = 2, b = 3, c = 4;
	int* p[ABC_SIZE] = { &a, &b, &c };

	printf("������ �迭�� �迭��Ҹ� �̿��� a,b,c ���\n");
	printf("a : %d, b : %d, c : %d\n", *p[0], *p[1], *p[2]);

	return 0;
}