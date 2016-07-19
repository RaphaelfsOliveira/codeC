#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int const DIM = 10;

char vetorPalavra[DIM];



void escreverVetor(){
	
		printf("Digite uma palavra : ");
		scanf("%s", &vetorPalavra);		
}



int retornaVetorNumero(int n, char *palavra){
	
	
		
	for(int i = 0; i < n; i++){
	
		while((palavra+i) != NULL){
			
			
			if(*(palavra+i) == 'a' || *(palavra+i) == 'A'){
				
					return 1;
			}
			if(*(palavra+i) == 'b' || *(palavra+i) == 'B'){
				
					return 2;
			}
			if(*(palavra+i) == 'c' || *(palavra+i) == 'C'){
				
					return 3;
			}
			if(*(palavra+i) == 'd' || *(palavra+i) == 'D'){
				
					return 4;
			}
			if(*(palavra+i) == 'e' || *(palavra+i) == 'E'){
				
					return 5;
			}
			
			i++;
				
		}
	}	
}



main(){
	escreverVetor();
	
	//retornaVetorNumero(DIM, vetorPalavra);
	
	for(int i = 0; i < DIM; i++){
		
	printf("\n\tVetor %d - > %d", vetorPalavra+i, retornaVetorNumero(DIM, vetorPalavra));
	
	}
	

	
	getch();
	}

