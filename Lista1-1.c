#include<stdio.h>
#include<math.h>




int main(){

	float raio; 
	float area; 
	const float pi = 3.1415;

	printf("Calculadora de areas circulares\n");

	printf("Digite o raio: \n");
	scanf("%f", &raio); 

	float potencia = pow(raio,2);
	area = pi*(potencia); 

	printf("o valor da área é %f \n", area); 

return(0);

}