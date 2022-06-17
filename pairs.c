#include<stdio.h>

void print_tableau(int t[], int len){
    for (int i = 0; i < len; i++){
        printf("%d ",t[i]);  
    }
    printf("\n");
}
int main() {
    int t[50];
    int j = 0;
    for (int i = 0; i < 100; i = i+2){
        t[j] = i;
        j = j+1;
    }

    print_tableau(t,50);

}