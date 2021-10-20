
#include <stdio.h>

int main(){
    //Dato un intero in input stampa l'intero alla posizione data
    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Inserisci un indice: \n");
    int numero;
    scanf("%d", &numero);
    printf("%d", arr[numero]);
}