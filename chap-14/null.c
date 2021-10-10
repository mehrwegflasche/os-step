#include<stdio.h>
#include<stdlib.h>

int main(){
    int *x = (int *) malloc(sizeof(int));
    printf("%p\n", x);
    x=NULL;
    free(x);
    printf("%d\n", *x);
    return 0;
}