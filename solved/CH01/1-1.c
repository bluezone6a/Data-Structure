// 참조 : https://blockdmask.tistory.com/56
#include <stdio.h>

int main(void)
{
    int ary[] = {8, 2, 8};
    int *p, i;

    p = ary;

    printf("ary를 이용한 출력\n");
    for (i = 0 ;i < 3 ;i ++) {
        printf("%d ", ary[i]);
    }
    printf("\n\n");

    printf("p를 이용한 출력\n");
    for (i = 0 ;i < 3 ;i ++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    return 0;
}