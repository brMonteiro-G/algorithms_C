#include<stdio.h>

int main () {

	printf("*******************************\n");

	printf("Bem vindo ao jogo de advinhação\n");

	printf("*******************************\n");

	int numSecreto = 45; 

	int chute; 

	printf("Tente descobrir o número: ");


	scanf("%d", &chute); 

	int acertou = (chute == numSecreto); 

	if(acertou){
		printf("Você acertou, parabéns\n" );
	}else{
		printf("Você errou, tente novamente\n");
	}

	if(chute > numSecreto){
		printf("Você chutou um número maior, tente novamente.\n");
	}else{
		printf("Você chutou um número menor, tente novamente.\n");
	}


	printf("Fim do jogo !\n");

}