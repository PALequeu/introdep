#include<stdio.h>

int main(){
    int t[5];
    int t1[5] = {1,2,3,4,5};
    int t2[5] = {3,6,1,6,3};

    for(int i = 0; i<5; i++){
        t[i] = t1[i]+t2[i];
        printf("%d ", t[i]);
    }
    printf("\n");
}