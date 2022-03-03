#include <stdio.h>
#include <stdlib.h>
#define DIM 100

/*
Aggiungere funzione di controllo dell'input nell'esercizio delle bombe.
Scrivere il programma C dell'esercizio: In una gara di salto in alto, ogni concorrente può effettuare 3 salti.
Per ogni partecipante si registra il suo Cognome, i metri saltati in ciascuna prova e il salto migliore.
Scrivere il programma che carica, prelevandoli dal file "GARA.DAT", tutti i dati in una tabella GARA con la seguente struttura •
Cognome (massimo 20 caratteri), • salti: vettore di 3 reali. Se il salto è nullo si mette 0. • migliore: misura massima raggiunta (calcolata e non presente nel file)
Dopo il caricamento la tabella contiene la classifica in base al salto migliore e verrà visualizzata a video.
Quindi il programma salva nel file sequenziale "RISULTATI.TXT" per ogni prova,
 il numero medio di metri saltati (esclusi i salti nulli) da tutti i partecipanti e il/i vincitore/i
(ci possono essere dei pari merito), con la misura del salto migliore e il/i nominativo/i.
*/

typedef struct{
    char cognome[LUNG];
    float salti[NUMSALTI];
    float saltoMigliore;
}Partecipanti;

void leggi(char nomeFile[],Team v[], int nMax, int *n) {
    FILE *fp;
    int k;

    fp = fopen (nomeFile, "r");
    if(fp == NULL) {
        printf("IL FILE NON ESISTE\n");
    } else {
        k=0;
        while(k < nMax && (fscanf(fp,"%f", v[k].cognome) != EOF)) {
            k++;
        }
        *n = k;
        fclose(fp);
    }
}

void salva(char nomeFile[], Team vett[], int n){
    FILE *fp;
    int k;

    fp = fopen(nomeFile, "w");

    if(fp == NULL){
        printf("ERRORE NELL'APERTURA DEL FILE");
    }else{
       for(k = 0; k < n; k++){

       }
       if(conta != 0) {
            media = somma / conta;
       }else{
           media = 0;
       }
       fprintf(fp, "salto %d - media: %.2fm\n", j + 1, media);

    }
    fprintf(fp, "Vincitore/i: ");

    k = 0;
    tro = -1;

    while(k < n && tro == -1) {
        if(v[k].saltoMigliore == v[0].saltoMigliore) {
            fprintf(fp, "%s", v[k].cognome);
        }else{
            tro == 0; //salto inferiore
        }
        k++;
    }
    fprintf(fp, "con %.2fm\n", v[0].saltoMigliore);

    fclose (fp);
}

int main() {
    Partecipanti info[DIM];
    int n;

    salva()

    leggi("gara.txt",v1,100,&n);



    return 0;
}
