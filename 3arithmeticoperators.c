#include <stdio.h>

int main() {
    char op;
    scanf(" %c", &op);
    if (op == '+' || op == '-' || op == '*' || op == '/')
        printf("Valid Operator\n");
    else
        printf("Invalid Operator\n");
    return 0;
}
