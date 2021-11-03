#include<stdio.h>

int main(){

int num ; 

printf("Digite um número \n");
scanf("%d", &num); 
printf("seu número foi: %d \n", num);



if(num >= 20 && num <=90){
printf("O número se encontra no intervalo entre 20 e 90\n");

}else{
	printf("Número fora do intervalo entre 20 e 90\n");
}
	
	}