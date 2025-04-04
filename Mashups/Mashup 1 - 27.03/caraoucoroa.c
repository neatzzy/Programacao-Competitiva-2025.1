/*
 * Problem: Heads or Tails
 * Description: Calculate the integer part of the probabilities for 'cara' (heads) and 'corona' (tails) based on the counts of each outcome from a biased coin.
 * Input: Two integers L (calls) and G (beers), with 0 ≤ L, G ≤ 100 and at least one occurrence.
 * Output: Two integers representing the integer percentages of 'cara' and 'corona' probabilities, respectively.
 */

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