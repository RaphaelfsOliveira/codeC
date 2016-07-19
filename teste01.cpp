#include<stdio.h>
#include<conio.h>

int main(void)

{
    char caractere;
    int inteiro;
    float Float;
    double Double;

    printf("Caractere: %d bytes \t em %d\n", sizeof(caractere), &caractere);
    printf("Inteiro: %d bytes \t em %d\n", sizeof(inteiro), &inteiro);
    printf("Float: %d bytes \t em %d\n", sizeof(Float), &Float);
    printf("Double: %d bytes \t em %d\n", sizeof(Double), &Double);
    
	getch();
}
