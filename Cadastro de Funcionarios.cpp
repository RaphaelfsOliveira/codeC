#include<conio.h>
#include<stdio.h>

//int const DIM = 4;

int DIM;
char apagado[20];

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
Pessoa pessoas[30];


void funCadastro(){  //Função para capturar o objeto p e todas os seus atributos de mesma classe ou nao;
		
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
	
	printf("\tCidade...: ");
	scanf("%s", &p.residencia.cidade);
}


void funLeitura(){  // le o objeto p e todos os seus atributos
	
	printf("\n\t## Funcionario ##\n");
	
	printf("\n\t# Nome....: %s ", p.nome);
	printf("\n\t# Idade...: %d ", p.idade);
	printf("\n\t# Email...: %s \n", p.email);
	printf("\n\t## Endereco ##\n");
	printf("\n\t# Rua.....: %s ", p.residencia.rua);
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

void leituraGeral(){ // escolhe o funcionario que quer ler pelo numero de cadastro dele
	
	//int i = 0;
	int k = 0;
	
	printf("\n\t# Digite o Numero do Funcionario que quer ver: ");
	
	for(int i = 0; i < DIM; i++){
		
		p = pessoas[i];
		printf("\n\t %d -> Nome...: %s ", i, p.nome);
	}
	
	scanf("%d", &k);
	
	if(k >= DIM){
		
		printf("\n\n\t# Funcionario nao cadastrado #\n\n");
		
	}else{
		
		p = pessoas[k]; 
		funLeitura();
	}
}


void funContaFuncionarios(){ // muda o tamanho de DIM que é vinculado ao loop que cadastra os funcionarios
	
	printf("\n\t# Quantos funcionarios gostaria de cadastrar: ");
	scanf("%d", &DIM);
}


void apagaFuncionario(){
	
	int m = 0;
	
	printf("\n\tGostaria de apagar que funcionario ?\n");
	
	for(int l = 0; l < DIM; l++){
		
		p = pessoas[l];
		printf("\n\t %d -> Nome...: %s ", l, p.nome);
		}
		
		scanf("%d", &m);
		
		//if(p.idade != 0){
					
			p.nome[20] = 0;
			p.idade = 0;
			p.email[20] = 0;
			p.residencia.rua[20] = 0;
			p.residencia.cidade[20] = 0;
			p.residencia.bairro[20] = 0;	
		//}
		
	pessoas[m] = pessoas[30];  // m;
}





void funOpcao(){ // escolhe que opção do programa voce quer 
	
	int x = 0;
	
	printf("\n\t ## Digite a opcao desejada ##");
	printf("\n\t ## 1 >> CADASTRO           ##");
	printf("\n\t ## 2 >> LER FUNCIONARIO    ##");
	printf("\n\t ## 3 >> LER TODOS          ##");
	printf("\n\t ## 4 >> APAGAR FUNCIONARIO ##");
	scanf("%d", &x);
	
	switch(x){
		
		case 1:
			funContaFuncionarios();
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
		
		case 4:
			apagaFuncionario();
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
