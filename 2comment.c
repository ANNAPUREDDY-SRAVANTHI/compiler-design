#include <stdio.h>
int main() {
    char input[] = "// This is a comment"; 
    char c1 = input[0], c2 = input[1];
    if (c1 == '/' && c2 == '/') {
        printf("Comment\n");
    } else {
        printf("Not a comment\n");
    }
    return 0;
}
