#include<stdio.h>
#include<math.h>


int main() {

	float temp1; 

	printf("Bem vindo ao conversor de temperaturas: \n Digite o valor da temperatura em ºC");

	scanf("%f", &temp1);
	

	float temp2 = (9*temp1 + 160)/5;


	printf("O valor da temperatura em graus Celsius: = %.2f \n",temp1);
	printf("O valor da temperatura em graus Farenheint: = %.2f \n",temp2);

	return 0 ;

}