#include<stdio.h>

int fibonacci(int n) {
        if (n==1){
       
            return 1;
        }
        else if (n==2){
           
            return 2;
        }
        else {
        int i = 1;
        int j = 2;
        int k = 0;
        int counter = 2;
        for(counter; counter < n; counter++){
            k = i + j;
            i = j;
            j = k;
        }
        
        return j;
        }
        
    }

int main() {
    for (int i=1;i < 10; i++){
        printf("element %d : %d\n",i,fibonacci(i));
    }
}