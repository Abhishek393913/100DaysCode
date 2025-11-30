#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];
    fp = fopen("output.txt", "w");
    if(fp == NULL) {
        printf("File could not be created\n");
        return 0;
    }
    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);
    fclose(fp);
    printf("Data written to file.\n");
    return 0;
}