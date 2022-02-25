#include <stdio.h>
#include <stdlib.h>
/*
Scrivere un programma per leggere e stampare array bidimensionale di float. Il
programma richiede all’utente il numero di righe e di colonne dopo di che richiede ad
uno ad uno gli elementi da inserire nell&#39;array per poi stamparlo.  Il programma
inserisce in un secondo array unidimensionale i numeri più piccoli di ogni riga.
Allocare e deallocare l’array restituito.
*/

int chiediDim() {               // chiedo la dimensione delle righe e colonne
    int dim;
    do {
        printf("Inserisci una dimensione: ");
        scanf("%d", &dim);
    } while(dim <= 0);          // se la dimensione inserita e' minore o uguale a 0 gli chiedo di inserirla di nuovo
    return dim;
}

void caricaMat(float** mat, int nr, int nc) {       //passo la matrice e le due dimensioni come parametri
    for(int k = 0; k < nr; k++) {
        for(int j = 0; j < nc; j++) {
            printf("Inserisci numero nella cella [%d][%d]: ", k, j);
            scanf("%f", &mat[k][j]);        //utilizzando i 2 for inserisco un numero all'interno di ogni cella
        }
        printf("\n");
    }
}

void stampaMat(float** mat, int nr, int nc) {       //passo la matrice e le due dimensioni come parametri
    for(int k = 0; k < nr; k++) {
        for(int j = 0; j < nc; j++) {
            printf("%.2f | ", mat[k][j]);       //utilizzando i 2 for stampo in float ciò che trova all'interno di ogni cella
        }
        printf("\n");
    }
}

void stampaVet(float *v, int n) {           //stampo il vettore dei numeri più piccoli all'interno di ogni riga
    for (int k = 0; k < n; k++){
        printf("%.2f | ", v[k]);
    }
}

int main() {
    int nR, nC;

    nR = chiediDim();       //passo alla variabile il valore che restituisce la funzione chiediDim()
    nC = chiediDim();

    float **mat = (float **)malloc(nR * sizeof(float *));       // numero di reghe dinamico della matrice
    for(int k = 0; k < nR; k++) {
        *(mat + k) = (float *)malloc(nC * sizeof(float));       // vettore dinamico delle colonne della matrice
    }

    caricaMat(mat, nR, nC);     //passo la funzione della carica della matrice all'interno del main
    stampaMat(mat, nR, nC);     //passo la funzione della stampa della matrice all'interno del main

    float *v = (float *)malloc(nR * sizeof(float));     // vettore dinamico

    float temp;     //variabile di appoggio

    for (int j = 0; j < nR; j++) {
        temp = mat[j][0];
        for(int m = 0; m < nC; m++){
            if (mat[j][m] < temp) {
                temp = mat[j][m];           // se la variabile della prima cella di ogni riga è maggiore della variabile delle celle seguenti carico la varibile minore all'interno della variabile di appoggio
            }
        }
        v[j] = temp;            //passo la variabile di appoggio dentro il vettore
    }

    printf("\n");
    printf("Vettore dei numeri piu' piccoli: \n");
    stampaVet(v, nR);       //stsmpo il vettore

    return 0;
}
