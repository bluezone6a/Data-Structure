/*
	배열을 선언하고 배열이름 ary 및 배열 포인터 p를 이용하여 배열요소를 출력하는 프로그램을 작성하라.
	이때 ary와 p를 사용한 여러 가지 주소표현 및 역참조를 테스트하라.
*/

#include<stdio.h>
#define arySize 3

int main() {

	int ary[] = { 8,2,8 }; 

	int* p = ary; 
	int i; 
	printf("ary를 이용한 출력\n"); 
	for (i = 0; i < arySize; i++) 	printf("%d ", ary[i]); 

	puts("\n"); 

	printf("p를 이용한 출력\n"); 
	for(i=0; i<arySize; i++) printf("%d ", *(p + i));
	
	return 0;
}