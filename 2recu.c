#include <stdio.h>
#include <stdlib.h>

int soma(int a, int b){
    if (a == 0) {
        return b;
    } else {
        return soma(a - 1, b + 1);
    }
}

int main(){
    int a, b, c;

    printf("adicione o valor de a: \n");
    scanf("%d", &a);
    printf("adicione o valor de b: \n");
    scanf("%d", &b);

    c = soma(a, b);

    printf("a soma de %d + %d eh: %d\n", a, b, c);
    
    return 0;
}