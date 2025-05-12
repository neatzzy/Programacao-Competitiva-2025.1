/*
 * Problem: Control Groups
 * Description: Determine the maximum odd group size M such that all groups have the same size (odd), minimizing the total number of groups.
 * Input: A single integer N (1 ≤ N ≤ 10^18).
 * Output: The largest odd divisor of N, representing the optimal group size.
 */

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