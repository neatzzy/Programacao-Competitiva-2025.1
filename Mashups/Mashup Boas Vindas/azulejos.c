/*
 * Problem: Tiles (Azulejos)
 * Description: Calculate the number of green tiles needed to cover an N×M wall in a checkerboard pattern, starting with green at (1,1).
 * Input: Two integers N and M (1 ≤ N, M ≤ 2·10^9), representing wall height and width.
 * Output: The total count of green tiles used in the pattern.
 */

#include <stdio.h>

int main(){
    long long int n, m, qtd;

    scanf("%lld %lld", &n, &m);

    int mn = m * n;

    if(mn % 2 == 0){
        qtd = mn / 2;
    }
    else{
        qtd = (mn / 2) + 1;
    }

    printf("%lld\n", qtd);
}