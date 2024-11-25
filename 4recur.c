#include <stdio.h>
#include <stdlib.h>

int prod(int a, int b) {
    if (b == 0) {
        return 0;
    } else if (b > 0) {
        return a + prod(a, b - 1);
    } else {
        return -prod(a, -b);
    }
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