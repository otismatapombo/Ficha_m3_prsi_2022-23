//Paulo Lopes 10ºGPSI
#include <stdlib.h>
#include <stdio.h>
float vol,vol2,volp,pagar;
void Volume_do_Tanque(){
int comp,alt,larg;
//volume do tanque
alt=20;
comp=30;
larg=30;
vol=(comp*alt*larg)/1000; 
printf("O volume total do tanque e %.0f litros\n",vol);
	
} 
void Litros_Perdidos(){
	int comp,alt,larg;
//volume do tanque
alt=5;
comp=30;
larg=30;
vol2=(comp*alt*larg)/1000;
volp=vol-vol2;
printf( "o volume perdido foi %.0f.\n O valor restante"
" e %.2f litros",vol,vol2,volp);
}
void Valor_Pagar(){
float v_litros=5.60;
printf ("\nPara encher o tanque e preciso de %.0f litros",vol2);
pagar=vol2*v_litros;
printf ("\nVoce devera pagar %.2f EUROS para encher o tanque.",pagar);
}
int main()
{
	Volume_do_Tanque();
	Litros_Perdidos();
	Valor_Pagar();
	 
}
