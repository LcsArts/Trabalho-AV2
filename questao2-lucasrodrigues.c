#include<stdio.h>
#include<string.h>
//Nome:Lucas Vicente Rodrigues - Matricula: 0050016035
int main(){
	
int contador, quantidade=0, tamanho;
char palavra[30], letra;
	
	printf("\nEntre com uma palavra:");
	gets(palavra);
	tamanho=strlen(palavra);
	printf("\nEntre com uma letra:");
	scanf("%c", &letra);
	
	for(contador=0; contador<tamanho; contador++){
		if(palavra[contador]==letra){
			quantidade++;
		}
	}
	printf("A letra %c apareceu %d vezes.",letra ,quantidade);
	
	getch()
	return 0;
}
