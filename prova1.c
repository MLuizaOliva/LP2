#include <stdio.h>

typedef struct {
    double real;
    double img;
} complex;

int complexIgualA(complex a, complex b) {
    return (a.real == b.real) && (a.img == b.img);
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

    return 0;
}

/*caso teste:
entrada:
num1 {1.0 e 2.0}
num2 {2.0 e 1.0}
num3 (1.0 e 2.0)

saída:
num1 e num2 sao iguais?nao
num1 e num3 sao iguais?sim
num2 e num3 sao iguais?nao
*/ 
