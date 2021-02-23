// 참조 : https://blockdmask.tistory.com/56
#include <stdio.h>

int main(void)
{
    int ary[2][3] = {{4, 2, 3}
                , {5, 2, 3}};
    int (*p)[3], i, j;

    p = ary;

    printf("ary를 이용한 출력\n");
    for (i = 0 ;i < 2; i++) {
        for (j = 0 ;j < 3; j ++) 
            printf("%d ", ary[i][j]);
        printf("\n");
    }
    printf("\n");

    printf("p를 이용한 출력\n");
    for (i = 0 ;i < 2; i++) {
        for (j = 0 ;j < 3; j ++) 
            printf("%d ", p[i][j]);
        printf("\n");
    }
    return 0;
}