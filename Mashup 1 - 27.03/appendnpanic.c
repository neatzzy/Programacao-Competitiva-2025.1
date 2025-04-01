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