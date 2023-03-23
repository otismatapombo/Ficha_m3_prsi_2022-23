//Paulo Lopes 10ºGPSI
#include <stdlib.h>
#include <stdio.h>

void programa(){
	float r,a,v,n_litros,total,pi=3.1416;
	for (int i=1;i<=4;i=i+1)
	{
		printf("\n--------------------%i------------------\n",i);
		printf ("RAIO(metros)=");
		scanf("%f",&r);
		printf ("ALTURA(metros)=");
		scanf("%f",&a);
		v=pi*r*r*a;
		printf("Volume= %.1f m3\n",v);
		n_litros=v*1000;
		printf("N litros = %.1f litros \n",n_litros);
		total=total+n_litros;
	}
	printf("Total litros =%.1f litros\n",total);
}
	int main (){
		programa();
	}
