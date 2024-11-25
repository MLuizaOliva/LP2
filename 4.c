//Agora suponha que o operador multiplicação não está disponível. 
//Podemos utilizar as funções anteriores para implementar a
// multiplicação, int prod(int a, int b);

#include <stdlib.h>
#include <stdio.h>

int prod(int a, int b) {
    int result = 0;
    for (int i = 0; i < b; i++) {
        result += a;
    }
    return result;
}

int main(){
    int a, b, c;

    printf("adicione o valor de a: \n");
    scanf("%d", &a);
    printf("adicione o valor de b: \n");
    scanf("%d", &b);

    c = prod(a, b);

    printf("o produto de %d * %d eh: %d\n", a, b, c);
    
    return 0;
}
