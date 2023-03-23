//Paulo Lopes 10ºGPSI
#include <stdlib.h>
#include <stdio.h>
void papeis(){
	float tipo1=2.20,tipo2=1.80,total,tot2;
	int tipo,jornais;
	
	for (int i=1;i<=4;i=i+1){
		printf("cliente %i quantos jornais?",i);
		scanf("%i",&jornais);
		
		printf("qual tipo de jornal voce precisa? (1 ou 2)");
		scanf("%i",&tipo);
		if (tipo==1)
			total=tipo1*jornais;
		 else
		 	total=tipo2*jornais;
				
			tot2=total+total;
	}
	printf("os clientes devem pagar %.2f EUROS",tot2);
}
int main (){
	papeis();
}

