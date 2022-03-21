#include <stdio.h>
#include <stdlib.h>
/*
Implementare l’inserimento di numeri interi in una
pila senza duplicati: se un valore è già presente nella pila non deve essere
inserito nuovamente. Stampare la pila al termine degli inserimenti e restituire
la media dei numeri stampati.
*/

typedef struct nodo {
    int num;// definisco la struttura Nodo con il next e il carattere
    int num2;
    struct nodo * next;
} Nodo;

Nodo* push(Nodo * l, int num) {
    Nodo* t=(Nodo*)malloc(sizeof(Nodo));
    if(l!=NULL) {
        t->num=num;
        t->next=l;
    } else {
        t->num=num;
        t->next=NULL;
    }
    return t;
}

void stampaPila(Nodo * h) {//funzione stampa pila cicla la pila in modo ricorsivo
    if(h!=NULL) {
        printf("%d\n",h->num);
        stampaPila(h->next);
    }
}

Nodo * aggiungiNumero(int n) {
    int num;
    int num2;

    Nodo* head; //definisco la head

    head = (Nodo*)malloc(sizeof(Nodo)); //alloco la pila in caso il numero dato in input sia maggiore di zero

    Nodo * r = head; // assegno la head alla variabile r
    Nodo * c = head;

    printf("inserisci un numero: "); //chiedo in input il carattere
    fflush(stdin); //pulisco la tastiera dell'input
    scanf("%d", &c->num2); //ricevo il carattere e lo posiziono tramite la head nel carattere della struttura Nodo

    for (int k = 0; k < n; k++){
        if (r->num != NULL){
            if (c->num2 != r->num){
                r->next;
            }
        }else {
            r->num = c->num2;
        }

    }

    if(k < n - 1) {
        num = (Nodo*) malloc (sizeof(Nodo));
    }
    r->next = num;
    r = num;

    return head;
}

int main() {
    Nodo *head = NULL;
    int dim;
    int num;

    printf("inserisci un numero: ");
    scanf("%d", &num);
    head = push(head, num);

    stampaPila(head);

    return 0;
}
