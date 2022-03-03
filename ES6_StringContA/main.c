#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define LUNG  10

/*
Scrivere un programma che data una stringa in input dica se la stessa contiene almeno
una ‘A’ tra i primi 10 caratteri.
*/

bool controlla(char str[]) {
    int i = 0;
    bool ok;

    ok = false;

    while(i < LUNG && ok == false) {
        if(str[i] == 'A' || str[i] == 'a') {
            ok = true;
        } else {
            i++;
        }
    }
    return ok;
}

int main() {
    char *stringa = (char *)malloc(LUNG*sizeof(char));

    printf("Inserisci una frase: ");
    scanf("%s", stringa);

    if(controlla(stringa)) {
        printf("\nNella stringa e' presente A o a\n");
    } else {
        printf("\nNella stringa non e' presente A o a\n");
    }

    printf("\n");
    return 0;
}
