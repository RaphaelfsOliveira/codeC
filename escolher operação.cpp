#include<stdio.h>
#include<conio.h>

void soma(float a, float b){     
     //calc é uma varivel local 
     //pertence somente à função soma!
     float calc = a + b;     
     printf("\nSoma...........: %5.2f", calc);
}

void subtracao(float a, float b){
     float calc = a - b;
     printf("\nSubtracao......: %5.2f", calc);
}

void multiplicacao(float a, float b){
     float calc = a * b;
     printf("\nMultiplicacao..: %5.2f", calc);
}

void divisao(float a, float b){
     float calc = a / b;
     printf("\nDivisao........: %5.2f", calc);
}

main(){
     
     //Variáveis
     float num1, num2;
     int opcao;
     
     printf("Entre com o 1o Numero...: ");  
     scanf("%f", &num1);
     
     printf("Entre com o 2o Numero...: ");  
     scanf("%f", &num2);
     
     printf("\nDigite: \n[1]Soma \n[2]Subtracao \n[3]Multiplicacao \n[4]Divisao\n\n"); 
     scanf("%d", &opcao);
     
     if(opcao == 1){
          soma(num1, num2); //executando a função soma
     }
     else if(opcao == 2){
          subtracao(num1, num2);
     }
     else if(opcao == 3){
          multiplicacao(num1, num2);
     }
     else if(opcao == 4){
          divisao(num1, num2);
     }
     else{
          printf("\nOpcao Invalida!");     
     }
     
     getch();
}
