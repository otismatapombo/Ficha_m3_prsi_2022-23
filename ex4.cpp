//Paulo 10ºGPSI
#include <stdio.h>
#include <stdlib.h>

void peixe(){
	float kg,p,vp;
	int t;
	printf("Quantos kilos de peixe??");
	scanf("%f",&kg);
	printf("Qual o tipo do peixe? Tipo 1(3.20EUROS) ou Tipo 2(7.80EUROS)");
	scanf ("%i",&t);
	if (t==1)
	 p=3.20;
	else 
	 p=7.80;
	 vp=kg*p;
	 printf("Voce deve pagar %.2f EUROS",vp);
}



int main(){
	peixe();
}
