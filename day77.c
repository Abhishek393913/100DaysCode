#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    fp = fopen("output.txt", "r");
    if(fp == NULL) {
        printf("File not found\n");
        return 0;
    }
    while((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}