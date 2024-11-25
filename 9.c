#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num; 
    int den; 
} frac;

int mdc_(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc_(b, a % b);
}

int mmc_(int a, int b) {
    return abs(a * b) / mdc_(a, b);
}


int igualA(frac a, frac b) {
    return (a.num * b.den == b.num * a.den);
}

int diferenteDe(frac a, frac b) {
    return !igualA(a, b);
}

int maiorQue(frac a, frac b) {
    return (a.num * b.den > b.num * a.den);
}

int maiorOuIgualQue(frac a, frac b) {
    return (maiorQue(a, b) || igualA(a, b));
}

int menorQue(frac a, frac b) {
    return (a.num * b.den < b.num * a.den);
}

int menorOuIgualQue(frac a, frac b) {
    return (menorQue(a, b) || igualA(a, b));
}

int main() {
    frac f1, f2;

    printf("frac 1 numerador:\n ");
    scanf("%d", &f1.num);
    printf("frac 1 denominador:\n ");
    scanf("%d", &f1.den);

    printf("frac 2 numerador:\n ");
    scanf("%d", &f2.num);
    printf("frac 2 denominador:\n ");
    scanf("%d", &f2.den);

    if (f1.den == 0 || f2.den == 0) {
        printf("O denominador nao pode ser zero.\n");
        return 1;
    }

    printf("frac iguais: %d\n", igualA(f1, f2));
    printf("frac diferentes: %d\n", diferenteDe(f1, f2));
    printf("primeira maior que segunda: %d\n", maiorQue(f1, f2));
    printf("primeira maior ou igual a segunda: %d\n", maiorOuIgualQue(f1, f2));
    printf("primeira menor que segunda: %d\n", menorQue(f1, f2));
    printf("primeira menor ou igual a segunda: %d\n", menorOuIgualQue(f1, f2));

    return 0;
}
