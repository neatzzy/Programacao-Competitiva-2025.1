#include <stdio.h>

int main(){
    int nroEquipes, capacidade, aux, presentes = 0;
    scanf("%d %d", &nroEquipes, &capacidade);

    for(int i = 0; i < nroEquipes; i++){
        scanf("%d", &aux);
        presentes += aux;
    }

    if(presentes > capacidade){
        printf("%d\n", capacidade / 3);
    }
    else{
        printf("%d\n", presentes / 3);
    }

    return 0;
}