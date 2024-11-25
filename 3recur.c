#include <stdio.h>
#include <stdlib.h>

int subtra(int a, int b){
    if (b == 0)
        return a;
    else
        return subtra(a - 1, b - 1);
}

int main(){
    int a, b, c;

    printf("adicione o valor de a: \n");
    scanf("%d", &a);
    printf("adicione o valor de b: \n");
    scanf("%d", &b);

    c = subtra(a, b);

    printf("a subtracao de %d - %d eh: %d\n", a, b, c);
    
    return 0;
}