#include <stdio.h>

int main() {
    int v[10], num, encontrado = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("Digite um número para buscar: ");
    scanf("%d", &num);
    for(int i = 0; i < 10; i++) {
        if(v[i] == num) {
            encontrado = 1;
            break;
        }
    }
    if(encontrado) printf("Número encontrado!\n");
    else printf("Número NÃO encontrado.\n");
    return 0;
}
