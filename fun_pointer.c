#include <stdio.h>

void swap(int *ptr_a, int *ptr_b){
    int temp;

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}


int main(){
    int a = 10;
    int b = 20;

    printf("A :%d B: %d\n\n", a, b);

    swap(&a, &b);

    
    printf("A :%d B: %d\n", a, b);
}