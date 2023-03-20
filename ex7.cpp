//Paulo 10ºGPSI
#include <stdio.h>
#include <stdlib.h>

 void sapatos(){
 	int c,ns;
 	float p,vp;
 	int s;
 	printf ("quantos clientes?");
 	scanf("%i",&c);
 	for (int i=1;i<=c;i=i+1){
 		printf ("\n----------------------\n");
 		printf ("\nQuantos livros=");
 		scanf("%i",&ns);
 		printf("valor=");
 		scanf("%f",&p);
 		vp=ns*p;
 		vp=vp-vp*23/100 - vp*15/100;
		printf("valor a pagar com desconto %.2f EUROS=\n",vp);
 		
 		printf ("se deseja sair digite 1 :");
 		scanf ("%i",&s);
 		if ( s==1)
 		   i=c;
 		
	 }
 }
int main(){
sapatos();
}
