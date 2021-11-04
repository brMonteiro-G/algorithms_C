#include<stdio.h>
#include<math.h>


int main() {

	float b,c; 

	printf("Digite os lados do triângulo: \n");

	scanf("%f", &b);
	scanf("%f", &c);

	float funcao = (pow(c,2) + pow(b,2));


	float  hipotenusa = sqrt(funcao);


	printf("O valor da hipotenusa é: %.2f \n", hipotenusa);

	return 0 ;

}