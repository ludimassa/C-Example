/* Argomenti: Numeri Casuali - Cicli For - While
 * HIGH LOW GAME
 * Si realizzi un programma C capace di realizzare il gioco HIGHT LOW!
 * All’avvio il programma chiede quante volte l’utente vuole giocare, e per ogni volta il software:$ *
 * - genera un numero casuale da 1  a 10
 * - chiede l'importo scommesso
 * chiede se il numero successivo generato è più alto o più basso
 * Quindi:
 * - Se il numero successivo è più piccolo e l’utente ha scelto più piccolo l’utente ha vinto
 *  ed il banco paga l'importo scommesso moltiplicato per 2
 * - Se il numero successivo è più piccolo e l’utente ha scelto più grande l’utente ha perso
 * - Se il numero successivo è uguale il banco restituisce l'importo scommesso
 * Al termine il software restituisce un REPORT in cui è presente:
 * - Il totale delle scommesse
 * - Indica quanto l'utente ha perso o ha vinto
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int nVolte;
    float totaleImportoScommesso=0;
    float totaleVincitePerdite=0;
    srand(time(NULL));
    printf("-------BENVENUTI NEL GIOCO HIGHT LOW ------");
    printf("\nQuante volte vuoi giocare:");
    scanf("%d",&nVolte);
    for(int i=0;i<nVolte;i++){
        int numero1=(rand()%10)+1;
        int scelta;
        float importoScommemsso;
        printf("\n\n-----------------------------");
        printf("\n %d Manche del gioco",i+1);
        printf("\nNumero su cui scommettere: %d",numero1);
        printf("\nInserire importo che si vuole scommettere:");
        scanf("%f",&importoScommemsso);
        totaleImportoScommesso=totaleImportoScommesso+importoScommemsso;
        printf("\nIl numero successivo che generera' il sistema e':");
        printf("\n[0] piu' piccolo - [1] piu' grande");
        scanf("%d",&scelta);
        while (!(scelta!=0^scelta!=1)){
            printf("\n*******SCELTA NON VALIDA*******");
            printf("\nReinserire scelta:");
            scanf("%d",&scelta);
        }
        int numero2=(rand()%10)+1;
        printf("\nIl numero generato e' %d \n",numero2);
        switch(scelta){
            case 0:
                //HA SCELTO PIU PICCOLO
                if(numero1>numero2){
                    printf("L'utente ha vinto");
                    totaleVincitePerdite=totaleVincitePerdite+importoScommemsso;
                }
                else if(numero1==numero2){
                    printf("L'utente non vince e non perde");
                }
                else{
                    printf("L'utente ha perso");
                    totaleVincitePerdite=totaleVincitePerdite-importoScommemsso;
                }
                break;
            case 1:
                //HA SCELTO PIU GRANDE
                if(numero1>numero2){
                    printf("L'utente ha perso");
                    totaleVincitePerdite=totaleVincitePerdite-importoScommemsso;
                }
                else if(numero1==numero2){
                    printf("L'utente non vince e non perde");
                }
                else{
                    printf("L'utente ha vinto");
                    totaleVincitePerdite=totaleVincitePerdite+importoScommemsso;
                }
                break;
        }
    }
    printf("\n\n-----------------------------");
    printf("\n-------REPORT GIOCATE--------");
    printf("\nL'importo totale scommesso e': %5.2f",totaleImportoScommesso);
    if (totaleVincitePerdite>0)
        printf("\nL'utente vince %5.2f",totaleVincitePerdite);
    else if(totaleVincitePerdite==0)
        printf("\nL'utente non vince e non perde");
    else
        printf("\nL'utente perde %5.2f",totaleVincitePerdite);
    printf("\n-----------------------------\n");
    system("PAUSE");
    return 0;
}