//Implemente o algoritmo desenvolvido como uma função int soma(int a, int b).

#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b) {
    while (a != 0) {
        a--;
        b++;
    }
    return b;
}

int main() {
    int a, b, c;

    printf("adicione o valor de a: \n");
    scanf("%d", &a);
    printf("adicione o valor de b: \n");
    scanf("%d", &b);

    c = soma(a, b);

    printf("a soma de %d + %d eh: %d\n", a, b, c);
    
    return 0;
}