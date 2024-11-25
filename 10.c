/*Um problema típico em ciência da computação consiste em converter um número da sua forma decimal para a forma binária. 
Por exemplo, o número 12 tem a sua representação binária igual a 1100. A forma mais simples de fazer isso é dividir o
número sucessivamente por 2, onde o resto 
da i-ésima divisão vai ser o dígito i do número binário (da direita para a esquerda).
Por exemplo: 12 / 2 = 6, resto 0 (1o dígito da direita para esquerda), 
6 / 2 = 3, resto 0 (2o dígito da direita para esquerda), 3 / 2 = 1 resto 1 (3o dígito da direita para esquerda), 
1 / 2 = 0 resto 1 (4o dígito da direita para esquerda). Resultado: 12 = 1100. 
Escreva um procedimento recursivo void Dec2Bin(int a) que dado um número decimal imprima a
 sua representação binária corretamente. */

#include <stdio.h>
#include <stdlib.h>

void Dec2Bin(int a) {
    if (a > 0) {
        Dec2Bin(a / 2);
        printf("%d", a % 2);
    }
}

int main() {
    int num;
    printf("Digite um numero decimal: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("0");
    } else {
        Dec2Bin(num);
    }
    printf("\n");
    return 0;
}