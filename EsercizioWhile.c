/** ESERCIZIO WHILE - IF
 * Si scriva un programma che richiede all'avvio quanti numeri si vogliono inserire
 * Dopodichè richiede l'inserimento dei numeri e determina
 * 1. la somma di tutti i numeri inseriti
 * 2. la media di tutti i numeri inseriti
 * 3. il prodotto di tutti i numeri inseriti
 * 4. il massimo
 * 5. il minimo
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int somma=0;
    int prodotto=1;
    int minimo;
    int massimo;
    float media;
    int numeroCorrente;
    int primaIterazione=1;
    int contatore=0;
    printf("Quanti numeri si vogliono inserire: ");
    scanf("%d",&n);
    while (contatore<n){
        printf("Inserire il %d numero:",contatore+1);
        scanf("%d",&numeroCorrente);
        somma=somma+numeroCorrente;
        prodotto=prodotto*numeroCorrente;
        if(numeroCorrente<minimo||primaIterazione){
            minimo=numeroCorrente;
        }
        if(numeroCorrente>massimo||primaIterazione){
            massimo=numeroCorrente;
        }
        primaIterazione=0;
        contatore++;
    }
    media=somma/(float)n;
    printf("\n ------------RISULTATI-------------");
    printf("\nSomma: %d",somma);
    printf("\nProdotto: %d",prodotto);
    printf("\nMedia: %f",media);
    printf("\nValore Minimo: %d",minimo);
    printf("\nValore Massimo: %d",massimo);
    printf("\n ------------FINE PROGRAMMA-------------\n");
    system("pause");
    return 0;
}