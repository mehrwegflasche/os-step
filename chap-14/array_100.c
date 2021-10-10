#include<stdio.h>
#include<stdlib.h>

int main(){

    int *data= (int *)malloc(100);
    data[100]=0;
    // continuation of Q6
    //free(data);
    // Q7 
    free(&data[10]);
    printf("%d",data[23]);
    return EXIT_SUCCESS;
}
