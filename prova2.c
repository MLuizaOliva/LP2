#include <stdio.h>
#include <math.h>

typedef struct {
    double real;
    double img;
} complex;

int complexIgualA(complex a, complex b) {
    return (a.real == b.real) && (a.img == b.img);
}

complex conjugado(complex a) {
    complex resultado;
    resultado.real = a.real;
    resultado.img = -a.img;
    return resultado;
}

double modulo(complex a) {
    return sqrt(a.real * a.real + a.img * a.img);
}

int main() {
    complex num1, num2, num3;

    printf("insira o valor de num1 (real e imaginario): ");
    scanf("%lf %lf", &num1.real, &num1.img);

    printf("insira o valor de num2 (real e imaginario): ");
    scanf("%lf %lf", &num2.real, &num2.img);

    printf("insira o valor de num3 (real e imaginario): ");
    scanf("%lf %lf", &num3.real, &num3.img);

    printf("num1 e num2 sao iguais? %s\n", complexIgualA(num1, num2) ? "sim" : "nao");
    printf("num1 e num3 sao iguais? %s\n", complexIgualA(num1, num3) ? "sim" : "nao");
    printf("num2 e num3 sao iguais? %s\n", complexIgualA(num2, num3) ? "sim" : "nao");

    complex conj1 = conjugado(num1);
    printf("conjugado de num1: (%.2f, %.2f)\n", conj1.real, conj1.img);
    complex conj2 = conjugado(num2);
    printf("conjugado de num2: (%.2f, %.2f)\n", conj2.real, conj2.img);
    complex conj3 = conjugado(num3);
    printf("conjugado de num3: (%.2f, %.2f)\n", conj3.real, conj3.img);

    double mod1 = modulo(num1);
    printf("modulo de num1: %.2f\n", mod1);
    double mod2 = modulo(num2);
    printf("modulo de num2: %.2f\n", mod2);
    double mod3 = modulo(num3);
    printf("modulo de num3: %.2f\n", mod3);

    return 0;
}

/*caso teste:

para compilar no linux é necessario o -lm por causa da math.h.
(eu acredito que o senhor saiba, mas como eu fiquei um tempão 
tentando descobrir, achei melhor colocar :/)


entrada:
num1 {1.0 e 2.0}
num2 {2.0 e 1.0}
num3 (1.0 e 2.0)

saída esperada:
nnum1 e num2 sao iguais? nao
num1 e num3 sao iguais? sim
num2 e num3 sao iguais? nao
conjugado de num1: (1.00, -2.00)
conjugado de num2: (2.00, -1.00)
conjugado de num3: (1.00, -2.00)
modulo de num1: 2.24
modulo de num2: 2.24
modulo de num3: 2.24*/ 
