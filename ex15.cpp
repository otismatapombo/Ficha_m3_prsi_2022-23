//Paulo Lopes 10ºGPSI
#include <stdlib.h>
#include <stdio.h>
void kit(){
	float kits,valor,tot,tot2;	
	
		printf("Qual o valor dos kits?");
		scanf("%f",&valor);
	
	for (int i=1;i<=3;i=i+1){
		printf("\ncliente %i quantos kits?",i);
		scanf("%f",&kits);
	tot=kits*valor;
	tot2=tot2+tot;
	}
	tot2=tot2-tot2*0.30;
	printf("os clientes devem pagar %.2f EUROS",tot2);
}
int main (){
	kit();
}
