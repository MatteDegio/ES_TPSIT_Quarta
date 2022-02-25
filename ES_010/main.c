#include <stdio.h>
#include <stdlib.h>
#define DIM 30
/*
Scrivere un programma per leggere e stampare
array bidimensionale di interi. Il programma richiede all’utente il numero
di righe e di colonne dopo di che richiede ad uno ad uno gli elementi da inserire
nell'array. Il programma inoltre deve gestire dinamicamente l'allocazione
e la deallocazione della memoria.
*/

int chiediRighe() {
    int nr;

    do {
        printf("Inserisci il numero di righe: ");
        scanf("%d", &nr);
    } while(nr < 0 || nr > DIM);
    return nr;
}

int chiediColonne() {
    int nc;

    do {
        printf("Inserisci il numero di colonne: ");
        scanf("%d", &nc);
    } while(nc < 0 || nc > DIM);
    return nc;
}

void caricaMat(int **m,int nc, int nr) {
    int k, j;

    for(k = 0; k < nr; k++) {
        for(j = 0; j < nc; j++) {
            printf("Inserisci elemento [%d][%d]: ", k,j);
            scanf("%d", &m[k][j]);
        }
    }
}

void stampaMat(int **m,int nc, int nr) {
    int k, j;

    printf("Matrice: \n");
    for(k = 0; k < nr; k++) {
        for(j = 0; j < nc; j++) {
            printf("%d ", m[k][j]);
        }
        printf("\n");
    }
}

int main() {
    int **mat;
    int nr, nc;

    nr = chiediRighe();
    nc = chiediColonne();

    mat = (int **)malloc(nr*sizeof(int *));

    for(int k = 0; k < nc; k++) {
        mat = (int *)malloc(nc * sizeof(int));
    }

    caricaMat(mat, nc, nr);
    stampaMat(mat, nc, nr);


    free(mat);

    return 0;
}
