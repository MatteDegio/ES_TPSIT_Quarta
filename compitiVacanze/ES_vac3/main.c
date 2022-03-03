#include <stdio.h>
#include <stdlib.h>

/* Paziente */
typedef struct {
    char nome[256] ;
    char cognome[256] ;
    int matricola;
    int pressione[2]; // minima e massima
    int temperature[3]; // temperature della mattina e pomeriggio e sera
    float parcella; // in euro quello che deve al dottore
} Paziente; // Iniziale maiuscola

void prototipo(Paziante *p){

}

float saldoClinica(Paziente clinica[], int numPaziente){
    float guadagno = 0;
    for(int i = 0; i < numPaziente; i++){
        guadagno += clinica[i].parcella;
    }
    printf("Guadagno totale della clinica: %.2f",guadagno);
}

void stampaPaziente(int n, Paziente clinica[]){
    for(int i = 0; i < n; i++){
        printf("Valori del signor %s %s:\n",clinica[i].cognome,clinica[i].nome);
        printf("Temperatura: \n  -mattino:%d\n  -pomeriggio:%d\n  -sera:%d",clinica[i].temperature[0],clinica[i].temperature[1],clinica[i].temperature[2]);
        printf("\nPressione: \n  -minima:%d\n  -massima:%d\n",clinica[i].pressione[0],clinica[i].pressione[1]);
    }
}

int main() {
    
    int n = 0;
    Paziente rossi;
    Paziente clinica[MAX];
    stampaPaziente(n,clinica);

    return 0;
}
