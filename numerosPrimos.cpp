#include<stdio.h>
#include<conio.h>
#include<math.h>

//numeros primos

int const n = 20;
int numeros[n];
int primos[20];

void gerarNumeros(){
	
	for(int i = 0; i <= n; i++){
		
		numeros[i] = i;
		printf("\nNumero gerado : %d",numeros[i]);
	}
}



void numerosPrimos(){
	
	int numPrimo = 0;
	
	for(int i = 0; i <= n; i++){
		
		numPrimo = numeros[i];
		
		int numN = (int)ceil(sqrt(numPrimo));
		
		printf("\n\nRaiz de numN.....: %d\n",numN);
		
		// dividir de 2 ate sqrt(n) aproximada pra cima
		for(int j = 2; j = numN; j++){
			
			int num = numPrimo % j;
			
			printf("\nNum teste  %d / %d ..: %d",numPrimo,j,num);
			break;
			
			/*			
			printf("\nNumero Primo.....: %d",numPrimo);
			break;
							
			printf("\nNumero Composto.....: %d",numPrimo);
			break;
			*/
			
			
		}
	}	
}





main(){
	
	gerarNumeros();
	
	printf("\n\n");
		
	numerosPrimos();
	
	printf("\n\n");
	
	printf("\n\nRaiz quadrada de 9 = %0.2f",sqrt(9));
	printf("\n\nRaiz quadrada de 9 = %d",ceil(sqrt(9)));

	
	getch();
}


