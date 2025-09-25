#include <stdio.h>

int main() {
    int mat[4][4], i, j, maior;

    printf("Digite os elementos da matriz 4x4:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    maior = mat[0][0];
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j] > maior)
                maior = mat[i][j];
        }
    }

    printf("Maior elemento = %d\n", maior);

    return 0;
}