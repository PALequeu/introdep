#include<stdio.h>
#include<string.h>

int main() {
    char string[20];
    printf("chaine de caractère : ");
    scanf("%s",string);
    int length = strlen(string);
    printf("length : %d\n",length);
}