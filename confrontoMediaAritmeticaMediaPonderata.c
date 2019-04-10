/* MEDIA ARITMETICA VS MEDIA PONDERATA
 * Si realizzi un software capace di calcolare, utilizzando le funzioni,
 * sia la media aritmetica che la media ponderata
 * */
#include <stdio.h>
#include <stdlib.h>
float mediaAritmetica(float numeri[], int nNumeri){
    float somma=0;
    for (int i = 0; i < nNumeri; ++i) {
        somma=somma+numeri[i];
    }
    return somma/nNumeri;
}
float mediaPonderata(float numeri[], float pesi[], int nNumeri){
    float sommaPesata=0;
    float sommaPesi=0;
    for (int i = 0; i < nNumeri; ++i) {
        sommaPesata=sommaPesata+numeri[i]*pesi[i];
        sommaPesi=sommaPesi+pesi[i];
    }
    return sommaPesata/sommaPesi;
}
int main() {
    printf("MEDIA ARITMETICA VS MEDIA PONDERATA\n");
    int nNumeri;
    printf("Quanti numeri si vogliono mediare? ");
    scanf("%d", &nNumeri);
    float numeri[nNumeri], pesi[nNumeri];
    printf("\n --------INSERIMENTO NUMERI-------\n");

    for (int i = 0; i < nNumeri; ++i) {
        printf("Inserire numero da mediare: ");
        scanf("%f",&numeri[i]);
        printf("Inserire peso: ");
        scanf("%f",&pesi[i]);
        printf("\n");
    }
    printf("\n --------------RISULTATI----------\n");
    printf("Media Ponderata: %f \n",mediaAritmetica(numeri,nNumeri));
    printf("Media Aritmetica: %f \n",mediaPonderata(numeri,pesi,nNumeri));
    system("pause");
    return 0;
}
