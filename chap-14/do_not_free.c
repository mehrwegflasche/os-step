#include<stdio.h>
#include<stdlib.h>

int main(){
    int *x = (int *) malloc(sizeof (int));
    *x = 100;
    printf("%d\n",*x);
    return 0;
    free(x);
}
