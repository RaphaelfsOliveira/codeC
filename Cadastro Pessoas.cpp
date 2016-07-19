#include<conio.h>
#include<stdio.h>

int const DIM = 4;


// estruturas 
typedef struct{
	
	char rua[20];
	char bairro[20];
	char cidade[20];
		
} Endereco;

typedef struct{
	
	char nome[20];
	int idade;
	char email[20];
	Endereco residencia;
	
} Pessoa;

// declarando Objetos
Endereco e; 
Pessoa p;

// criando o vetor Pessoa
Pessoa pessoas[DIM];


void funCadastro(){
		
	printf("\n\t# CADASTRO #");
	
	printf("\n\tNome.....: ");
	scanf("%s", &p.nome);
	
	printf("\tIdade....: ");
	scanf("%d", &p.idade);
	
	printf("\tEmail....: ");
	scanf("%s", &p.email);
	
	printf("\n\t# Endereco #");
	
	printf("\n\tRua......: ");
	scanf("%s", &p.residencia.rua);
	
	printf("\tBairro...: ");
	scanf("%s", &p.residencia.bairro);
	
	printf("\tCidade......: ");
	scanf("%s", &p.residencia.cidade);
}


void funLeitura(){
	
	printf("\n\t# Funcionario #");
	
	printf("\n\t# Nome...: %s ", p.nome);
	printf("\n\t# Idade..: %d ", p.idade);
	printf("\n\t# Email..: %s ", p.email);
	printf("\n\t# Endereco #");
	printf("\n\t# Rua..: %s ", p.residencia.rua);
	printf("\n\t# Bairro..: %s ", p.residencia.bairro);
	printf("\n\t# Cidade..: %s \n", p.residencia.cidade);
}

void cadastroGeral(){
	
	for(int j = 0; j < DIM; j++){
		
		funCadastro();
		pessoas[j] = p;
	}
}

void lerTodos(){
	
	for(int i = 0; i < DIM; i++){
		
		p = pessoas[i]; 
		funLeitura();
	}
}

void leituraGeral(){
	
	int i = 0;
	
	printf("\n\tDigite o Numero do Funcionario que quer ver : ");
	scanf("%d", &i);
	
	p = pessoas[i]; 
	funLeitura();
	
}




void funOpcao(){
	
	int x = 0;
	
	printf("\n\t ## Digite a opcao desejada ##");
	printf("\n\t ## 1 >> CADASTRO  ");
	printf("\n\t ## 2 >> LER FUNCIONARIO ");
	printf("\n\t ## 3 >> LER TODOS ");
	scanf("%d", &x);
	
	switch(x){
		
		case 1:
			cadastroGeral();	
			//funCadastro();
			funOpcao();
			break;
		
		case 2:
			leituraGeral();
			//funLeitura();
			funOpcao();
			break;
		
		case 3:
			lerTodos();
			funOpcao();
			break;
				
		default:
			printf("\n\tOpcao Invalida!\n\t");
			funOpcao();
			break;
		
	}
}


main(){
	funOpcao();
	
	getch();
}
