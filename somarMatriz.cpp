#include<stdio.h>
#include<conio.h>


float matriz[2][2];


void obterNumero(){
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			printf("Digite quatro numeros [%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
			
		}
	}
}

float somaNumero(){
	
	float soma = 0;
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			soma = soma + matriz[i][j];
		
		}
	}return soma;
}


float mediaNumero(){
	
	return somaNumero() / 4; 
}


float menorNumero(){
	
	float menor = matriz[0][0];
	
		for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			if(menor > matriz[i][j]){
				
				menor = matriz[i][j];
			}
		
		}
	}return menor;
	
}

float maiorNumero(){
	
	float maior = matriz[0][0];
	
		for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			if(maior < matriz[i][j]){
				
				maior = matriz[i][j];
			}
		
		}
	}return maior;
	
}




main(){
	obterNumero();
	printf("O valor da soma dos numeros da matriz : %0.1f \n\n", somaNumero());
	printf("O valor da media dos numeros da matriz : %0.1f \n\n", mediaNumero());
	printf("O menor Numero da matriz : %0.1f \n\n", menorNumero());
	printf("O maior Numero da matriz : %0.1f", maiorNumero());
	
	getch();
}
