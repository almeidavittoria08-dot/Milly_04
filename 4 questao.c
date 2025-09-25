#include <stdio.h>

int main() {
    int mat[3][2], trans[2][3], i, j;

    printf("Digite os elementos da matriz 3x2:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    // Transposta
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            trans[j][i] = mat[i][j];
        }
    }

    printf("Matriz transposta 2x3:\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}