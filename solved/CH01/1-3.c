// 참조 : https://blockdmask.tistory.com/56
#include <stdio.h>

int main(void)
{
    int ary[2][2][3] = { {
            {1, 2, 3}
            , {4, 5, 6}
        }, {
            {7, 8, 9}
            , {10, 11, 12}}};
    int (*p)[2][3], i, j, k;

    p = ary;

    printf("ary를 이용한 출력\n");
    for (i = 0 ;i < 2; i++) {
        for (j = 0 ;j < 2; j ++) {
            for (k = 0 ;k < 3; k ++) {
                printf("%d ", ary[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("p를 이용한 출력\n");
    for (i = 0 ;i < 2; i++) {
        for (j = 0 ;j < 2; j ++) {
            for (k = 0 ;k < 3; k ++) {
                printf("%d ", p[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}