#include <stdio.h>

int main() {
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int diagPrincipal = 0, diagSecundaria = 0;

    for(int i=0;i<3;i++) {
        diagPrincipal += mat[i][i];
        diagSecundaria += mat[i][2-i];
    }

    printf("Soma da diagonal principal: %d\n", diagPrincipal);
    printf("Soma da diagonal secundaria: %d\n", diagSecundaria);

    return 0;
}