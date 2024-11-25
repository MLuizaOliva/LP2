/*Implemente uma versão da função anterior com o seguinte cabeçalho  int irreduc(frac* a).
 Esta função retorna verdadeiro se a fração foi simplificada. 
Caso a fração já esteja na sua forma irredutível e nenhuma simplificação foi feita, a função retorna falso.*/

#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int num;
    int den;
} frac;

int mdc_(int a, int b);

int irreduc(frac* a) {
    int mdc = mdc_(a->num, a->den);
    if (mdc == 1) {
        return 0; //falso
    }
    a->num /= mdc;
    a->den /= mdc;
    return 1; //verdadeiro
}
int main(){

    frac v;
    int a;

    printf("numerador: \n");
    scanf("%d", &a);
    v.num = a;
    printf("inclua o denominador: \n");
    scanf("%d", &a);
    v.den = a;

    v.valor = (double)v.num/v.den;

    v = irred(v);

    printf("frac irred eh:%d, %d, %f \n", v.num, v.den, v.valor);

    return 0;
}