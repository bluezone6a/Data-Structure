// 참조 : https://blockdmask.tistory.com/56
#include <stdio.h>

int main(void)
{
    int a = 2, b = 3, c = 4;
    int *p[3] = {&a, &b, &c};

    printf("포인터 배열의 배열요소를 이용한 a, b, c 출력\n");
    printf("a : %d, b : %d, c : %d\n", *p[0], *p[1], *p[2]);

    return 0;
}