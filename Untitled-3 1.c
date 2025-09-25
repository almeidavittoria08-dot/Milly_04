#include <stdio.h>

int main() {
    int v[20], pares = 0, impares = 0;
    for(int i = 0; i < 20; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) pares++;
        else impares++;
    }
    printf("Pares = %d | Ímpares = %d\n", pares, impares);
    return 0;
}
