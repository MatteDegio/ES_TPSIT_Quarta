#include <stdio.h>
#include <stdlib.h>

/*Scrivere una
funzione che inverta una coda, ovvero
produca degli elementi  della coda
di partenza. Suggerimento: utilizzare una pila*/

typedef struct nodo {
    int n;
    struct nodo * prox;
} Nodo;

void enqueue(Nodo ** c, int num) {
    Nodo * coda = *c;
    if(coda == NULL) {
        coda = (Nodo*)malloc(sizeof(Nodo));
        coda -> num = num;
        coda-> next = NULL;
    }else {
        coda -> next = (Nodo*)malloc(sizeof(Nodo));
        coda = coda -> next;
        coda -> num = num;
        coda -> next = NULL;
    }
    *c = coda;
}

int denqueue(Nodo ** head) {
    int num = 0;
    if(*head == NULL) {
        printf("Coda Vuota!!!\n");
    }else {
        Nodo* t = *head;
        num = t-> num;
        *head = t-> next;
    }
    return num;
}

void stampaLista(Nodo * l) {
    if(l -> next != NULL)stampaLista(l -> next);
    printf("%d ",l -> num);
}

void push(Nodo * l, int c) {
    Nodo * n = (Nodo*)malloc(sizeof(Nodo));
    n -> num = c;
    n -> next = NULL;
    if(l != NULL) {
        n -> next = l;
    }
    return n;
}

int pop(Nodo ** l) {
    Nodo * n = (Nodo*)malloc(sizeof(Nodo));
    n = *l;
    int num = 0;
    if(*l==NULL) {
        printf("Non ci sono nodi nella lista!!\n");
    }else {
        num = n -> num;
        n = n -> next;
        *l = n;
    }
    return num;
}

void invertiCoda(Nodo ** head){
    pila=push(pila,denqueue());

    enqueue(,pop(&pila));

}

int main() {
}
