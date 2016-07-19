#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void entradaDia(int *dia){
	
	printf("\n\nDigite o dia que quer saber..: ");
	scanf("%d", dia);
	printf("\n");	
}

int main();

int diaDaSemana(int *dia){
	
	int i = 0;
	int cont = 0;

	while(cont <= *dia){
		
		for(i = 0; i < 7 && cont <= *dia; i++){
			
			
			cont = cont + 1;
		}
	}
	return i;
}


void saidaDia(int d, int dia){

	switch(d){
		
		case 2 :
			printf("O Dia %d e Segunda-Feira", dia);
			break;
			
		case 3 :
			printf("O Dia %d e Terca-Feira", dia); 
			break;
			
		case 4 :
			printf("O Dia %d e Quarta-Feira", dia);
			break;
			
		case 5 :
			printf("O Dia %d e Quinta-Feira", dia);
			break;
			
		case 6 :
			printf("O Dia %d e Sexta-Feira", dia);
			break;
			
		case 7 :
			printf("O Dia %d e Sabado", dia);
			break;
			
		case 1 :
			printf("O Dia %d e Domingo", dia);
			break;
			
		default :
			printf("Erro de sistema");
			break;
		}
		main();	
}


main(){
	int dia;
	
	entradaDia(&dia);
	
		
	saidaDia(diaDaSemana(&dia), dia);
	
	
	
	getch();
	}






