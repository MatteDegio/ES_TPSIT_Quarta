#include <stdio.h>
#include <stdlib.h>
#define DIM 5

void caricaVettore(int v[],int n) {
    int k;

    for(k = 0; k < n; k++) {
        printf("inserire nella cella [%d] =",k);
        scanf("%d", (v + k));
    }
}

void ordinaVettore(int vett[], int n){
    int sup, k, a;

    for(sup = n - 1; sup > 0; sup--){

        for(k = 0; k < sup; k++){
            if(*(vett + k) > *(vett + k + 1)){
                a = *(vett + k + 1);
                *(vett + k + 1) = *(vett + k);
                *(vett + k) = a;
            }
        }
    }
}

void stampaVettore(int c[],int i) {
    int k;
    printf("vettore ordinato = ");
    for(k = 0; k < i; k++) {
        printf("%d ",*(c + k));
    }
}

int main() {
    int vett[DIM];

    caricaVettore(vett, DIM);

    ordinaVettore(vett, DIM);

    stampaVettore(vett, DIM);

    return 0;
}
