#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM  100

/*
Scrivere un programma che chieda n valori
interi (massimo 100), li collochi in un vettore e inverta il vettore
(scambiando il primo elemento con l'ultimo, il secondo con il penultimo, etc.).
Si usi i puntatori.
*/

void caricaVettore(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("\nInserisci il valore della cella [%d]: ", k);
        scanf("%d", (v+k));
    }
    return;
}

void stampaVettore(int v[], int n){
    int k;

    for(k = 0; k < n; k++){
        printf("%d | ", *(v+k));
    }
    return;
}

void invertiVett(int v[], int n){
    int k, j, temp;
    j = n - 1

    for(k = 0; k < n/2; k++){
        temp = *(v+k);
        *(v+k) = *(v+j-k);
        *(v+j-k) = temp;
    }
    return;
}

int main() {
    int v[DIM];
    int n;

    srand(time(NULL));
    do{
        printf("Inserisci la dimensione del vettore: ");
        scanf("%d", &n);
    }while(n < 0 || n > DIM);

    caricaVettore(v, n);
    printf("vettore: \n");
    stampaVettore(v, n);

    invertiVett(v, n);
    printf("\nvettore invertito: \n");
    stampaVettore(v, n);

    printf("\n");
    return 0;
}
