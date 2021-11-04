#include<stdio.h>
#include<math.h>


int main() {

	float a,b,c,d,e,f; 

	printf("Bem vindo ao solucionador de equações lineares");
	printf("Dada as equações \n ax + by = c \n e dx + ey = f \n");
	printf("Entre com os valores para descobrir x e y: \n");

	printf("valor de a   ");
	scanf("%f", &a);

	printf("valor de b   ");
	scanf("%f", &b);

	printf("valor de c   ");
	scanf("%f", &c);

	printf("valor de d   ");
	scanf("%f", &d);

	printf("valor de e  ");
	scanf("%f", &e);

	printf("valor de f ");
	scanf("%f", &f);
	

	float x = ((c*e)-(b*f))/((a*e)-(b*d));
	float y = ((a*f)-(c*d))/((a*e)-(b*d));


	printf("O valor da variável x é  = %.2f \n",x);
	printf("O valor da variável y é  = %.2f \n",y);

	return 0 ;

}