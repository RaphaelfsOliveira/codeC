#include<conio.h>
#include<stdio.h>

int numero[10];


void obterNumero(){
		
	for(int i = 0; i < 10; i++){
		
		printf("Digite um numero [%d] : ", numero[i]);
		scanf("%d", &numero[i]);
	}
}

int menorNumero(){
	
	int menor = numero[0];
	
	for(int i = 0; i < 10; i++){
		
		if(menor > numero[i]){
			
			menor = numero[i];
			
		}
		
	}return menor;
}

int maiorNumero(){
	
	int maior = 0;
	
	for(int i = 0; i < 10; i++){
		
		if(maior < numero[i]){
			
			maior = numero[i];
			
		}
		
	}return maior;
}

int somaNumeros(){
	
	int soma = 0;
	
	for(int i = 0; i < 10; i++){
		
		soma = soma + numero[i];
		
	}return soma;
}

int obterMedia(){
	
	return somaNumeros() / 10;
}


main(){
	
	obterNumero();
	printf("Maior Numero : %d \n",maiorNumero());
	printf("Menor Numero : %d \n",menorNumero());
	printf("Soma dos Numeros : %d \n",somaNumeros());
	printf("Media dos Numeros : %d \n",obterMedia());
	
	getch();
}
