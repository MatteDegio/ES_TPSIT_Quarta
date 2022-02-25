#include <stdio.h>
#include <stdlib.h>
#define DIM_MAX 20
#define DIM 3

/*
Definire una struttura per memorizzare  i dati degli studenti
di una classe e dei voti nelle varie materie: Italiano, Matematica e Informatica.
Si scriva una funzione in c, che a partire da un vettore di studenti fornito come argomento,
determini la disciplina con la media più alta.
*/

typedef struct {
    char nome[DIM_MAX];
    char cognome[DIM_MAX];
    float italiano[DIM];
    float matematica[DIM];
    float informatica[DIM];
} Votimateria;

float mediaMaterie(Votimateria studente[]) {
    int k;
    float mediaI, mediaM, mediaInf;
    float sommaIta, sommaMate, sommaInfo;

    for(k = 0; k < DIM; k++) {
        sommaIta = sommaIta + studente[k].italiano[k];
        sommaMate = sommaMate + studente[k].matematica[k];
        sommaInfo = sommaInfo + studente[k].informatica[k];
    }
    printf("%f", sommaIta);
}

int main() {
    Votimateria studente[DIM];
    int k;
    float media;

    for(k=0; k<DIM; k++) {
        printf("inserisci il nome: ");
        scanf("%s", &studente[k].nome);
        printf("inserisci il cognome: ");
        scanf("%s", &studente[k].cognome);
        printf("inserisci voto italiano: ");
        scanf("%d", &studente[k].italiano[k]);
        printf("inserisci voto matematica: ");
        scanf("%d", &studente[k].matematica[k]);
        printf("inserisci voto informatica: ");
        scanf("%d", &studente[k].informatica[k]);
    }

    media = mediaMaterie(studente);

    return 0;
}
