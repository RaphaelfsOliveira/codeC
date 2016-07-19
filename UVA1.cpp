#include<conio.h>
#include<stdio.h>

/*

programa le as notas do aluno
calcula a media do semestre
diz se o aluno ficou aprovado,
reprovado, ou em recuperação
e diz quanto precisa para a 
prova final

*/
#include "UVA2.cpp"


float p1;
float p2;

float media;


void lerNotas(){
	
	printf("Digite a nota da P1 : ");
	scanf("%f", &p1);
	
	printf("Digite a nota da P2 : ");
	scanf("%f", &p2);
	
}

void recuperacao(){
	
	media = 10 - media;
}

void obterMedia(){
	
	media = somaNotas(p1 , p2)/2;
		
}

void situacaoAluno(){
	
	float mediaf = 0;
	
	mediaf = media;
	
	if(mediaf >= 7){
		
		printf("Voce esta aprovado, media final : %0.2f" ,mediaf);
		
	}else if(mediaf < 7 && mediaf >= 3){
		
		printf("Voce esta em recuperacao, media final : %0.2f \n" ,media);
		recuperacao();
		printf("Voce precisa : %0.2f" ,media);
		
		
	}else{
		
		printf("Voce esta reprovado, media final : %0.2f" ,mediaf);
	}
	
	
}



main(){
	lerNotas();
	obterMedia();
	situacaoAluno();
		
	getch();	
}
