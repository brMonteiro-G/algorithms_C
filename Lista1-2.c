#include<stdio.h>
#include<math.h>




int main(){

	float raio; 
	float area; 
	float altura; 
	const float pi = 3.1415;

	printf("Calculadora de volumes cilindricos\n");

	printf("Digite o raio: \n");
	scanf("%f", &raio); 
	printf("Digite a altura: \n");
	scanf("%f", &altura); 

	float potencia = pow(raio,2);
	area = altura*(pi*(potencia)); 

	printf("o valor da área é %f \n", area); 

return(0);

}