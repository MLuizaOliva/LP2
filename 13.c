#include <stdio.h>
#include <stdlib.h>

int power(int x, int n) {
    if (n == 0) {
        return 1;
    } else {
        return x * power(x, n - 1);
    }
}

int main() {
    int x, n;

    printf("digite o valor de x: ");
    scanf("%d", &x);
    printf("digite o valor de n: ");
    scanf("%d", &n);

    int resultado = power(x, n);

    printf("o valor de %d elevado a %d eh: %d\n", x, n, resultado);

    return 0;
}