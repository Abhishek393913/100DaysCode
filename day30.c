#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int i = 0, j = strlen(str) - 1;
    while(i < j) {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++; j--;
    }
}

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    size_t len = strlen(s);
    if(len > 0 && s[len - 1] == '\n') s[len - 1] = '\0';
    reverse(s);
    printf("Reversed string: %s\n", s);
    return 0;
}