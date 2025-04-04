#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "name1";
    int i = 1, valid = (isalpha(str[0]) || str[0] == '_');
    while (str[i] && valid) {
        if (!isalnum(str[i]) && str[i] != '_')
            valid = 0;
        i++;
    }
    if(valid)
    printf("valid");
    else
    printf("invalid");
    return 0;
}
