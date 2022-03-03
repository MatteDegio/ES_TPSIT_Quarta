#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM  10
#define LUNG  20

/*
Si scriva una funzione malloc2d, in grado di allocare una matrice rettangolare di numeri reali,
le cui dimensioni sono ricevute come parametri.
La matrice viene inizializzata azzerando tutte le caselle.
*/

void inserisciNum(float **mat, int nr, int nc) {
    int x, y;
    float num;


    do {
        printf("\nInserisci l'ascissa della posizione: ");
        scanf("%d", &x);
    } while(x < 0 || x > nc);

    do {
        printf("\nInserisci l'ordinata della posizione: ");
        scanf("%d", &y);
    } while(y < 0 || y > nr);

    printf("\nInserisci il numero da inserire: ");
    scanf("%f", &num);

    mat[x][y] = num;

    return;
}

void malloc2d(int nr, int nc) {

    float **mat= (float **)malloc(nr * sizeof(float));
    for(int k = 0; k < nr; k++) {
        mat[k] = (float *)malloc(nc * sizeof(float));
    }

    for(int r = 0; r < nr; r++) {
        for(int c = 0; c < nc; c++) {
            mat[r][c] = 0;
        }
    }
    do {
        inserisciNum(mat, nr, nc);
        printf("\nVuoi inserire altri numeri nella matrice? ('no' per uscire)\n");
        scanf("%s", s);
    } while(strcmp(s, "no") != 0);

    printf("\nMATRICE CON NUMERI REALI\n");
    stampaMat(mat, nr, nc);

    free(mat);
}

void stampaMat(float **mat, int nr, int nc) {
    for(int r = 0; r < nr; r++) {
        for(int c = 0; c < nc; c++) {
            printf("%.2f ", mat[r][c]);
        }
        printf("\n");
    }
}

int main() {
    int nr, nc;

    printf("inserisci le righe: ");
    scanf("%d", &nr);
    printf("inserisci le colonne: ");
    scanf("%d", &nc);

    malloc2d(nr, nc);

    return 0;
}
