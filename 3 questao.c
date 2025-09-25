#include <stdio.h>

int main() {
    int mat[5][5], i, j, linha, soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Digite a linha que deseja somar (0 a 4): ");
    scanf("%d", &linha);

    for(j=0;j<5;j++){
        soma += mat[linha][j];
    }

    printf("Soma da linha %d = %d\n", linha, soma);

    return 0;
}