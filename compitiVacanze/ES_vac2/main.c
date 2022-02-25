#include <stdio.h>
#include <stdlib.h>
#define DIM 7
#define  MAX_TOP 50

int stack[50];
int pilaT = -1;

int stackVuoto() {
    if(pilaT == -1) {
        return 1;
    } else {
        return 0;
    }
}

int stackPieno() {
    if(pilaT == MAX_TOP) {
        return 1;
    } else {
        return 0;
    }
}

void push(char d) {
    if(!stackPieno()) {
        pilaT = pilaT + 1;
        stack[pilaT] = d;
    } else {
        printf("\nSTACK PIENO\n");
    }
}

char pop(char d) {
    if(!stackVuoto()) {
        d = stack[pilaT];
        pilaT = pilaT - 1;
        return d;
    } else {
        printf("\nSTACK VUOTO\n");
    }
}

void inserisciEl(int vet[]) {
    int el;

    for(int k = 0; k < DIM; k++) {
        printf("inserisci l'el %d :",k);
        scanf("%d",&el);
        vet[k] = el;
    }
}

void invertiPila(int vet[]) {
    for(int k = DIM; k >= 0; k--) {
        push(vet[k]);
    }
}

void stampaPila() {
    int el;
    el = pop(stack[pilaT]);
    printf(" %d \n",el);
}

void main() {
    int vet[DIM];

    inserisciEl(vet);
    invertiPila(vet);
    stampaPila();

    return 0;
}
