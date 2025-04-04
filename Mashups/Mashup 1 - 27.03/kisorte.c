/*
 * Problem: Ki-Sorte!
 * Description: Find the lottery ticket number (1-99) that minimizes the sum S(x) = |x-A| + (x-B)^2 + |x-C|^3, given A, B, C.
 * Input: Three integers A, B, C (1 ≤ A, B, C ≤ 99).
 * Output: The ticket number x with the smallest S(x). If tied, any valid x is accepted.
 */

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