/*
	배열을 선언하고 배열이름 ary 및 배열 포인터 p를 이용하여 배열요소를 출력하는 프로그램을 작성하라.
	이때 ary와 p를 사용한 여러 가지 주소표현 및 역참조를 테스트하라.
*/

#include <stdio.h> //include와 <> 띄어쓰기
//include와 define 분리
//상수 : Naming -> ALL_CAPITAL, 연속된 단어일 경우 언더바(_)로 구별한다.
#define ARY_SIZE 3 // 상수의 값이 바뀌게 되면 이 부분만 수정하면 되어서 (Hard coding -> 없애야 한다.)

int main(void) //main함수에는 void
{ // main 함수의 스코프는 개행 후 처리
	int ary[] = {8, 2, 8}; // ,뒤에 띄어쓰기

	int *p = ary, i; //포인터는 변수와 붙혀쓴다.
	printf("ary를 이용한 출력\n"); //설명이 나온경우 주석처리 안해도 됨
	for (i = 0; i < ARY_SIZE; i++) 
		printf("%d ", ary[i]); //간단한 루프일 경우 한줄처리 하지만 출력하는 메인 로직이니깐 개행 후 처리
	//puts("\n");
	putchar('\n'); //puts보다 메모리 더 아낄 수 있다.

	printf("p를 이용한 출력\n");
	for (i = 0; i < ARY_SIZE; i++)
		//printf("%d ", *(p + i));
		printf("%d ", p[i]); //가독성 더 좋아서
	return 0;
}