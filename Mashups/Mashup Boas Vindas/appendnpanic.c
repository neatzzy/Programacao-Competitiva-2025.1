/*
 * Problem: Append and Panic!
 * Description: Given a corrupted string S formed by concatenating the original string t and its sorted, duplicate-free version, determine the length of the original string t.
 * Input: A single string S of uppercase letters (2 ≤ |S| ≤ 2000).
 * Output: An integer representing the length of the original string t.
 */

#include <stdio.h>
#include <string.h>

int main(){
    char str[2001];
    int tam, final;

    scanf("%s", str);
    tam = strlen(str);

    for(int i = tam - 1 ; i >= 0 ; i--){
        if(str[i] <= str[i - 1]){
            final = i;
            break;

        }
    }

    printf("%d\n", final);
    
    return 0;
}