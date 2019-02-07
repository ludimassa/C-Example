/*
FARE UN PROGRAMMA CHE RICHIEDE DI INSERIRE 3 NUMERI INTERI
PER 4 VOLTE E CALCOLA LA SOMMA ED IL PRODOTTO DI
- TUTTI I PRIMI NUMERI DI OGNI RICHIESTA
- TUTTI I SECONDI NUMERI DI OGNI RICHIESTA
- TUTTI I TERZI NUMERI DI OGNI RICHIESTA
*/
#include<stdio.h>

int main(){
	int n1;
	int somma1=0;
	int somma2=0;
	int somma3=0;
	int prodotto1=1;
	int prodotto2=1;
	int prodotto3=1;
	int contatore=0;
	while(contatore<4){
		printf("INSERISCI PRIMO NUMERO: ");
		scanf("%d",&n1);
		somma1=somma1+n1;
		prodotto1=prodotto1*n1;
		printf("INSERISCI SECONDO NUMERO: ");
		scanf("%d",&n1);
		somma2=somma2+n1;
		prodotto2=prodotto2*n1;
		printf("INSERISCI TERZO NUMERO: ");
		scanf("%d",&n1);
		somma3=somma3+n1;
		prodotto3=prodotto3*n1;
		contatore++;
	}
	printf("\n------------ \n RISULTATI:\n");
	printf("PRIMI VALORI SOMMA %d - PRODOTTO %d \n",somma1,prodotto1);
	printf("PRIMI VALORI SOMMA %d - PRODOTTO %d \n",somma2,prodotto2);
	printf("PRIMI VALORI SOMMA %d - PRODOTTO %d \n",somma3,prodotto3);
	return 0;
}
