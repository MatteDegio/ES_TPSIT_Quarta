#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 30
#define MAX 50


typedef struct {
    char numero[DIM];
    char titoloFilm[MAX];
    char genere[DIM];
    char annoUscita[DIM];
    char dispo[DIM];
} Cinema;

void caricaVettore(Cinema v[], int n, char nomeFilm[]) {
    FILE *fp;
    int i = 0, conta = 0;
    char line[100];
    char *pezzo;

    fp = fopen(nomeFilm, "r");

    while(fgets(line, 100, fp)) {
        pezzo = strtok(line, ",");
        strcpy((v + i)->numero, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->titoloFilm, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->genere, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->annoUscita, pezzo);

        pezzo = strtok(NULL, ",");
        strcpy((v + i)->dispo, pezzo);
        i++;
    }
    conta = i;
    fclose(fp);
}

void stampaVettore(Cinema v[], int n) {
    for(int k=0; k<n; k++) {
        printf("%-5s %-20s %-20s %-10s %-10s", (v + k)->numero, (v + k)->titoloFilm, (v + k)->genere, (v + k)->annoUscita, (v + k)->dispo);
        printf("\n");
    }
}

int contaRighe(char nomeFile[]){
    char line[100];
    FILE *fp;
    int n = 0;

    fp = fopen(nomeFile, "r");

    while(fscanf(fp, "%s", line) != EOF){
        n++;
    }
    return n;
}

int main() {
    int n;
    Cinema *film;

    n = contaRighe("film.csv");

    film = (Cinema*) malloc(n * sizeof(Cinema));

    caricaVettore(film,DIM, "film.csv");
    stampaVettore(film, DIM);

    free(film);

    return 0;
}
