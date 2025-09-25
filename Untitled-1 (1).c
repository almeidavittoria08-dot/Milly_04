#include <stdio.h>

int main() {
    int v[15], maior, menor;
    for(int i = 0; i < 15; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
    }
    maior = menor = v[0];
    for(int i = 1; i < 15; i++) {
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }
    printf("Maior = %d | Menor = %d\n", maior, menor);
    return 0;
}
