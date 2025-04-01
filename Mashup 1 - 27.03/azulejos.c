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