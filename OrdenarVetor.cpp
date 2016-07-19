#include<stdio.h>
#include<conio.h>

/*
Algoritimo de varredura de vetor 

tentar novos.

*/

int const DIM = 5;

int vetor[DIM];

void lerVetor(){
	
	for(int i = 0; i < DIM; i++){
		
		printf("Digite um numero para o vetor[ %d ] .....: ", i);
		scanf("%d", vetor+i);	
	}	
}

void
