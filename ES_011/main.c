#include <stdio.h>
#include <stdlib.h>

void caricaVettore(int v[],int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("inserire nella cella [%d] =",k);
        scanf("%d",&v[k]);
    }
    printf("\n");
}

void stampaVettore(int c[],int i) {
    int k;
    printf("numeri in comune = ");
    for(k = 0; k < i; k++) {
        printf("%d",c[k]);
    }
    printf("\n");
}

int chiediDim() {
    int n;

    do {
        printf("Inserisci il numero di righe: ");
        scanf("%d", &n);
    } while(n < 0 || n > DIM);
    return n;
}

int main() {
    int k, j, l, i;
    float b, somma;
    float *v;

    somma = 0;

    int n = chiediDim();
    v = (float *)malloc(n*sizeof(float));

    caricaVettore(v, n);

    stampaVettore(v, n);

    for(i = 0; i < n; j++) {
        b = *(v + j);
        for( l = j + 1; l < n; l++) {
            if(*(v + l) == b) {
                *(v + l) = 0;
                *(v + j) = 0;
            }
        }
    }
    printf("\n");

    for(int k=0; k<n; k++) {
        somma = somma + *(v+k);
    }

    printf("Somma rimanenti: %2.f", somma);


    return 0;
}
