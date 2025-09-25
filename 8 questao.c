#include <stdio.h>

int main() {
    int mat[4][4] = {
        {1,2,3,4},
        {5,2,7,8},
        {9,10,2,12},
        {13,14,15,2}
    };
    int num, cont=0;

    printf("Digite o numero para contar: ");
    scanf("%d", &num);

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(mat[i][j] == num)
                cont++;

    printf("O numero %d aparece %d vezes.\n", num, cont);

    return 0;
}