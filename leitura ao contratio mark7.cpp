#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int numeroDecimal(int x, int *v){   
	
	int aux = x;
	int cont = x;
	
	int j = x;
	
	for(int i = x; i >= 1 && x != 0; i--){     
		
			if(x % 2 == 0){
				
				*(v+i) = 0;
						
			}else{
				
				*(v+i) = 1;
			}
			
			x = (x / 2);
			cont--;
	}
	
	for(int j = cont+1; j <= aux; j++){
	
		printf("%d ", *(v+j));
	}
}



main(){
	int const DIM = 22;
	
	int vetor[DIM];	
	
	numeroDecimal(DIM, vetor);
	
	
	getch();
	}
