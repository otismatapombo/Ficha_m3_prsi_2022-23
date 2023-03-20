//Paulo 10ºGPSI
#include <stdio.h>
#include <stdlib.h>

void papelaria(){

	
	int clientes, s1,s2,s3,
	dis=1,
	fut=0.90,
	ani=0.85;
	float tot,tot2;
	printf("Quantos clientes?");
	scanf("%i",&clientes);
	 for (int i=1;i<=clientes;i=i+1)
	 {	 	
	printf ("\ncliente n%i ",i);
	printf("\nQuantas saquetas Disney?");
	scanf("%i",&s1);
	s1=s1*dis;
	printf("Quantas saquetas futebol?");
	scanf("%i",&s2);
	s2=s2*fut;
	printf("Quantas saquetas animais?");
	scanf("%i",&s3);
	s3=s3*ani;
	tot=s1+s2+s3;
	tot2=tot+tot2;
	 }
	 
	printf ("\nValor total= %.2f EUROS",tot2);
	
}
int main(){
	papelaria();
}
