#include <stdio.h>

int main(){
    int l, g, ratioL, ratioG;

    scanf("%d %d", &l, &g);

    float total = l + g;

    ratioL = (l / total) * 100;
    ratioG = (g / total) * 100;

    printf("%d %d\n", ratioL, ratioG);

    return 0;
}