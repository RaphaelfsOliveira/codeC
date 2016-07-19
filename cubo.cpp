#include<stdio.h>
#include<conio.h>
#include "cubo2.cpp"


int b;


void numero(){
	
	printf("Calcula quadrado e Cubo: ");
	scanf("%d", &b);
	
}

void saida(){
	
	printf("O quadrado do numero : %d \n", quadrado(b));
	printf("O cubo do numero : %d", cubo(b));
}

main(){
	
	numero();
	saida();
	
	getch();
}
