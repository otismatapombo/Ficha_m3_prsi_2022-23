//Paulo 10ºGPSI
#include <stdio.h>
#include <stdlib.h>

 void sapatos(){
 	int c,ns;
 	float p,vp;
 	printf ("quantos clientes?");
 	scanf("%i",&c);
 	for (int i=1;i<=c;i=i+1){
 		printf ("----------------------");
 		printf ("\nQuantos livros=");
 		scanf("%i",&ns);
 		printf("valor=");
 		scanf("%f",&p);
 		vp=ns*p;
 		vp=vp-vp*23/100 - vp*15/100;
		printf("valor a pagar com desconto %.2f EUROS=\n",vp);
 		
	 }
 }
int main(){
sapatos();
}
