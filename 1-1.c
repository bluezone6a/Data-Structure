/*
	�迭�� �����ϰ� �迭�̸� ary �� �迭 ������ p�� �̿��Ͽ� �迭��Ҹ� ����ϴ� ���α׷��� �ۼ��϶�.
	�̶� ary�� p�� ����� ���� ���� �ּ�ǥ�� �� �������� �׽�Ʈ�϶�.
*/

#include<stdio.h>
#define arySize 3

int main() {

	int ary[] = { 8,2,8 }; 

	int* p = ary; 
	int i; 
	printf("ary�� �̿��� ���\n"); 
	for (i = 0; i < arySize; i++) 	printf("%d ", ary[i]); 

	puts("\n"); 

	printf("p�� �̿��� ���\n"); 
	for(i=0; i<arySize; i++) printf("%d ", *(p + i));
	
	return 0;
}