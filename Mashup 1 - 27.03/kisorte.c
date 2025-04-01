#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c, menorBilhete = 1, menorValor;

    scanf("%d %d %d", &a, &b, &c);

    menorValor = abs(1 - a) + pow(1 - b, 2) + pow(abs(1 - c), 3);

    for(int i = 2 ; i <= 99 ; i++){
        int valor = abs(i - a) + pow(i - b, 2) + pow(abs(i - c), 3);
        if(valor < menorValor){
            menorValor = valor;
            menorBilhete = i;
        }
    }

    printf("%d\n", menorBilhete);

    return 0;
}