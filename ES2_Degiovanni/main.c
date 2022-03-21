#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int num; // definisco la struttura Nodo con il next e il carattere
    struct nodo * next;
} Nodo;

void enqueue(Nodo ** tail,Nodo** head, int num) {
    Nodo * h= *head;
    Nodo * t= *tail;
    if(t!=NULL && h!=NULL) {
        t->next=(Nodo*)malloc(sizeof(Nodo));
        t=t->next;
        t->num=num;
        t->next=NULL;
    } else {
        t=(Nodo*)malloc(sizeof(Nodo));
        h=t;
        t->num=num;
        t->next=NULL;
    }
    *head=h;
    *tail=t;
}

int dequeue(Nodo**head,Nodo**tail) { //toglie il primo elemento della coda che si é inserito (la head)
    int dato = NULL;
    if(*head == NULL) { //controllo che la coda non sia vuota
        printf("Coda vuota");
    } else {
        dato = (*head)->num;//salvo il dato della head
        *head= (*head)->next;//sposto la head al elemento successivo
    }
    return dato;//restituisco il dato
}

void stampaCodaInverita(Nodo* h) {
    if(h!=NULL) {
        printf("%d\n",h->num);
        stampaCoda(h->next);
    }
}

int main() {
    Nodo *tail = NULL;
    Nodo *head = NULL;
    int dim;
    int num;
    int scelta;
    Nodo *l = (Nodo*)malloc(sizeof(Nodo));
    int *v;
    do {
        printf("0.ESCI\n1.INVERTI LA CODA\n2.AGGIUNGI UN NUOVO ELEMENTO\nfai una scelta: ");
        scanf("%d", &scelta);
        switch(scelta) {
        case 0:
            system("PAUSE");
            break;
        case 1:
            int n = dequeue(&head,&tail);
            enqueue(&tail,&head,n);
            stampaCodaInvertita(head);
            break;
        case 2:
            printf("inserisci un elemento: ");
            scanf("%d", &num);
            enqueue(&tail,&head,num);
            break;
        }
    } while(scelta != 0);

    printf("\n");
    system("PAUSE");
    return 0;
}
