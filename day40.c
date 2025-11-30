#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];
    fp = fopen("output.txt", "r");
    if(fp == NULL) {
        printf("File not found\n");
        return 0;
    }
    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);
    return 0;
}