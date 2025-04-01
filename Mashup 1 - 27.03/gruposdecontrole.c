#include <stdio.h>

int main(){
    long long n;
    
    scanf("%lld", &n);

    while(n % 2 == 0){
        n /= 2;
    }

    printf("%lld\n", n);

    return 0;
}