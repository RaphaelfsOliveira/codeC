#include<stdio.h>
#include<conio.h>


char botaoCalc(){
	
	char botao;
	
	printf("Teste de conversao char : ");
	scanf("%s",&botao);
	
	if(botao == '+'){
		
		printf("Sucesso + \n");
		
	}else if(botao == '-'){
		
		printf("Sucesso - \n");
		
	}else if(botao == '/'){
		
		printf("Sucesso / \n");
		
	}else if(botao == '*'){
		
		printf("Sucesso * \n");
		
	}else{
		
		printf("Falha\nInsira um dos botoes de operacao : + , - , * , / \n\n");
		botaoCalc();
	}
	botaoCalc();
}

main(){
	
	botaoCalc();
	
	
	
	
	getch();
}

