#include <stdio.h>

int main() {
    char ch;
    int c = 0, w = 1, l = 1;

    printf("Enter text (end with $):\n");

    while ((ch = getchar()) != '$') {
        c++;
        if (ch == ' ') w++;
        if (ch == '\n') l++;
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", c, w, l);
    return 0;
}
