
/*Supondo que você somente pode utilizar os operadores incremento (++) e decremento (--), 
implemente uma aplicação que, dados dois valores inteiros, retorne a soma deles.*/

#include <stdio.h>

int main(){

    int a, b, c;

    printf("adicione o valor de a: \n");
    scanf("%d", &a);
    printf("adicione o valor de b: \n");
    scanf("%d", &b);

    c = b;

    for(int i=0; i < a; i++){
        c++;
    }

    printf("a soma de %d + %d eh: %d\n", a, b, c);

    return 0;
}
