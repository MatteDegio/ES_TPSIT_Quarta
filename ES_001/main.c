#include <stdio.h>
#include <stdlib.h>
#define LUNG_MAX 20
#define MAX_STUD 10
/*
eserscizio: 1
si scriva un programma che:

-definisca un tipo di dato studente. ogni studente è caratterizzato da un nome, un cognome e una matricola.

-acquisisca i dati 10 studenti e per ogni nuovo studente inserito, proceda ad un inserimento ordinato (lo scopo dell'esercizio è ordinare
 gli studenti durante il processo di inserimento delgi stessi e non dopo averli inseriti tutti con un algoritmo di ordinamento).

-stampi  i dati degli studenti.
*/

typedef struct{
    char nome[LUNG_MAX];
    char cognome[LUNG_MAX];
    int matricola;
}Studente;

void caricaStudente(Studente d[]){
    int k;
    for(k = 0; k < MAX_STUD; k++){
        printf("INSERISCI LO STUDENTE\n");
        printf("nome: ");
        scanf("%s", d[k].nome);
        printf("cognonome: ");
        scanf("%s", d[k].cognome);
        printf("matricola: ");
        scanf("%d", &d[k].matricola);
    }
}

void stampaStudente(Studente d[]){
    int k;

    for (k = 0; k < MAX_STUD; k++){
        printf("NOME: %s - COGNOME: %s - MATRICOLA: %d\n", d[k].nome, d[k].cognome, d[k].matricola);
    }
}

int main(){

    Studente v[MAX_STUD];

    caricaStudente(v);
    stampaStudente(v);

    return 0;
}
