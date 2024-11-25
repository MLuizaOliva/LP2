#include <stdio.h>
#include <stdlib.h>

int mod(int x, int y) {
    if (abs(x) > abs(y)) {
        return mod(abs(x) - abs(y), abs(y));
    } else if (abs(x) < abs(y)) {
        return abs(x);
    } else {
        return 0;
    }
}

int main() {
    int x, y;

    printf("valor de x: ");
    scanf("%d", &x);
    printf("valor de y: ");
    scanf("%d", &y);

    if (y == 0) {
        printf("divisao por zero nao eh permitida.\n");
        return 1;
    }

    int resultado = mod(x, y);

    printf("o resto da divisao de %d por %d eh: %d\n", x, y, resultado);

    return 0;
}