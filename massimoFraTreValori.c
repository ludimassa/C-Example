/* MASSIMO FRA 3 VALORI IF - ELSE IF
 * Fare un programma che prende in ingresso 4 numeri.
Il primo rappresenta il raggio di un cerchio
Il secondo numero rappresenta il lato di un quadrato
Il terzo ed il quarto numero rappresentano il lato maggiore ed il lato minore di un rettangolo
Calcola l’area del cerchio, del quadrato e del rettangolo e la stampa a video
Infine dice qual' è la figura con l’area più grande!
*/
#include <stdio.h>

int main() {
    float raggio;
    float latoQuadrato;
    float latoMaggioreRettangolo;
    float latoMinoreRettangolo;
    float areaCerchio;
    float areaQuadrato;
    float areaRettangolo;
    printf("Inserire il raggio del cerchio:");
    scanf("%f",&raggio);
    printf("Inserire il lato del quadrato:");
    scanf("%f",&latoQuadrato);
    printf("Inserire il lato maggiore del rettangolo:");
    scanf("%f",&latoMaggioreRettangolo);
    printf("Inserire il lato minore del rettangolo:");
    scanf("%f",&latoMinoreRettangolo);
    printf("----------------");
    areaCerchio=raggio*raggio*3.14;
    areaQuadrato=latoQuadrato*latoQuadrato;
    areaRettangolo=latoMaggioreRettangolo*latoMinoreRettangolo;
    printf("L'area del cerchio e' %f",areaCerchio);
    printf("L'area del quadrato e' %f",areaQuadrato);
    printf("L'area del rettangolo e' %f",areaRettangolo);
    if(areaCerchio>=areaQuadrato && areaCerchio>=areaRettangolo) {
        printf("L'area del cerchio e' la più grande");
    }
    else if(areaQuadrato>=areaCerchio && areaQuadrato>=areaRettangolo) {
        printf("L'area del quadrato e' la più grande");
    }
    else{
        printf("L'area del rettangolo e' la più grande");
    }
    return 0;
}