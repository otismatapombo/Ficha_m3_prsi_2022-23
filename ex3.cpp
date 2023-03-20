//Paulo 10ºGPSI
#include <stdio.h>
#include <stdlib.h>

void sandes_calc(){
	float s1=1.20,
	s2=1.10,
	s3=1.50,
	tot,tot1,
	ss1,ss2,ss3;
	for (int i=1;i<=10;i=i+1){
		printf ("\ncliente %i, quantas sandes de fiambre?",i);
		scanf ("%f",&ss1);
		
		printf ("\nquantas sandes de queijo?");
		scanf ("%f",&ss2);
		
		printf ("\nquantas sandes mistas?");
		scanf ("%f",&ss3);
		ss1=s1*ss1;
		ss2=s2*ss2;
		ss3=s3*ss3;
		tot1=ss1+ss2+ss3;
		tot=tot1+tot;
		printf ("----------------------------------------\n\n");
		
	} 
	printf("o valor a pagar dos 10 clientes e = %.2f EUROS",tot);
}

int main(){
	sandes_calc();
}
