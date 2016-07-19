#include<conio.h>
#include<stdio.h>



int matriz[2][2];


void obterNumero(){
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			printf("Digite os numeros da matriz [%d][%d] : ", i , j);
			scanf("%d", &matriz[i][j]);
		}
	}
}


int diagonalA(){
	
	int produto = 1;
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			if( i == j){
				
				produto = produto * matriz[i][j];

			}
		}
	}return produto;
	
}


int diagonalB(){
	
	int produto = 1;
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 2; j++){
			
			if( i ==! j){
				
				produto = produto * matriz[i][j];
				
			}
		}
	}return produto;
	
}


int sarrus(){
	
	return diagonalA() - diagonalB();
}










main(){
	obterNumero();
	printf("Soma da Diangonal Principal : %d \n\n", diagonalA());
	printf("Soma da Diangonal Secundaria : %d \n\n", diagonalB());
	printf("Determinante da matriz por sarrus : %d", sarrus());	
	
	getch();
}
