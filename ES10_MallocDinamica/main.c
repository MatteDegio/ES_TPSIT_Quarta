#include <stdio.h>
#include <stdlib.h>

int main(){
    char *car;
    int *x;

    car = (char *) malloc(sizeof(char));
    *car = 'F';
    printf("%c\n",*car);

    x = (int *) malloc(sizeof(int));
    *x = 10;
    printf("%d",*x);

    printf("\n");
    return 0;
}
