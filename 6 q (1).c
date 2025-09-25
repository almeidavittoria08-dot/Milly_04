#include <stdio.h>

int main() {
    int n, fat = 1;
    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("Fatorial de %d = %d\n", n, fat);
    return 0;
}
