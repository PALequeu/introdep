#include<stdio.h>
#include<string.h>

int length(char string[20]){
    int length = strlen(string);

}

int compare(char string1[20], char string2[20]){
    int equal = 1;
    int i = 0;
    while ((i < length(string1)) && (equal == 1) ){
        if (string1[i] != string2[i]){
            print("%d,")
            printf("not equals") ;
            if (string1[i] < string2[i]){
                printf("-1");
                return -1;
            }
            else {
                printf("1");
                return 1;
            }
            equal = 0 ;
        }
        i++;
    }
    printf("0");
    return 0;
    
    
    
}



int main() {
    char string1[20];
    char string2[20];
    printf("première chaine de caractère : ");
    scanf("%s", string1);
    printf("seconde chaine de caractère : ");
    scanf("%s", string2);

    compare(string1,string2);
}