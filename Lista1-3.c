#include<stdio.h>
#include<math.h>


int main() {

	printf("Digite os lados do triângulo: \n");

	float a,b,c; 

	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);


	float p = (a + b + c)/2;

	float area; 

	double funcao = p*((p-a)*(p-b)*(p-c));

	area = sqrt(funcao);

	printf("O valor da área é: %f \n", area);

	return 0 ;

}