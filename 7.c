#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int den;
    double valor;
}frac;

int mdc_(int a, int b){
    if(a == b){
        return a;
    }if(a > b){
        return mdc_(a - b, b);
    }else{
        return mdc_(b, a);
    }
}

frac irred(frac f){
    int mdc = mdc_(f.num, f.den);
    f.num = f.num/mdc;
    f.den = f.den/mdc;
    
    return f;
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