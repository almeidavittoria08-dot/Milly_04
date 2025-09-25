#include <stdio.h>

int main() {
    int mat[2][2];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++) {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }

    printf("\nMatriz digitada:\n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}