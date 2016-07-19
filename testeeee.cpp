#include<stdio.h>
#include<conio.h>
#include<stdlib.h>



void lerNumeros(double *flut){
	
	printf("Digite um numero  Flutuante: ");
	scanf("%f", flut);
}

void imprimirValores(double *dou){
	
		printf("\n\tValor em Double : %d", *dou);
		
		float flou = *dou;
		
		printf("\n\tValor em Flout : %0.5f", flou);
		
		int intei = flou;
		
		printf("\n\tValor em Inteiro : %d", intei);
}



main(){
	double flut;
	
	lerNumeros(&flut);
	
	imprimirValores(&flut);
	
	
	
	getch();
	}
