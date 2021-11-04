#include<stdio.h>

int main() {


	printf("Digite seu gênero biológico em letras maiúscula \n");

	char sexo; 

	scanf("%c", &sexo);

	if(sexo == 'M' || sexo == 'F'){
		printf("gênero %c salvo com sucesso\n", sexo);
	}else{
		printf("dado incorreto \n");
	}




}