/*Implemente uma versão da função anterior com o seguinte cabeçalho 
 int irreduc(frac* a). Esta função retorna verdadeiro se a fração foi simplificada. 
 Caso a fração já esteja na sua forma irredutível e nenhuma simplificação foi feita, a função retorna falso.
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int num; /
    int den; 
} frac;

int mdc_(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc_(b, a % b);
}

int foi_simplificada(frac* a) {
    int mdc = mdc_(abs(a->num), abs(a->den));
    if (mdc == 1) {
        return 0; 
    } else {
        a->num /= mdc;
        a->den /= mdc;
        return 1; 
    }
}

int main() {
    frac v;
    int foi_simplificada;

    printf("informe o numerador: \n");
    scanf("%d", &v.num);

    printf("informe o denominador: \n");
    scanf("%d", &v.den);

    if (v.den == 0) {
        printf("o denominador nao pode ser zero.\n");
        return 1; 
    }
   
    v.valor = (double)v.num/v.den;
     foi_simplificada = irred(&v);

    if (foi_simplificada) {
        printf("a fracao foi simplificada para: %d/%d\n", v.num, v.den), v.valor;
    } else {
        printf("a fracao ja esta na sua forma irredutivel: %d/%d\n", v.num, v.den);
    }

    return 0;
}
