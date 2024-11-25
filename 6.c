/*Implementar as seguintes funções para trabalhar com frações:
frac soma(frac a, frac b);
frac subtra(frac a, frac b);
frac prod(frac a, frac b);*/ 

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
} frac;

int mdc(int a, int b){
    if(a == b){
        return a;
    }if(a > b){
        return mdc(b - a, b);
    }else{
        return mdc(a, b);
    }
}

frac soma (frac a, frac b){

}

frac subtra(frac a, frac b){

}
frac prod(frac a, frac b){

}