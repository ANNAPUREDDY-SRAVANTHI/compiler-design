#include <stdio.h>

int main() {
    char nonTerminal, common[10], diff1[10], diff2[10];

    printf("Enter non-terminal: ");
    scanf(" %c", &nonTerminal);
    
    printf("Enter common prefix: ");
    scanf("%s", common);
    
    printf("Enter first unique part: ");
    scanf("%s", diff1);
    
    printf("Enter second unique part: ");
    scanf("%s", diff2);

    printf("\nGiven Productions: %c -> %s%s | %s%s", nonTerminal, common, diff1, common, diff2);
    printf("\nEliminated Left Factoring:");
    printf("\n%c -> %s%c'", nonTerminal, common, nonTerminal);
    printf("\n%c' -> %s | %s\n", nonTerminal, diff1, diff2);

    return 0;
}
