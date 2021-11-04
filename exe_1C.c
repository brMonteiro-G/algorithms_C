#include<stdio.h>

int main(){

//refatorar código depois 

int a = 0 ,b = 0 ,c = 0,d = 10;

printf("Digite um valor para a variável A\n");
scanf("%d", &a);

printf("Digite um valor para a variável B\n");
scanf("%d", &b);

printf("Digite um valor para a variável C\n");
scanf("%d", &c);

if(c > 5){
	d = (a+b)*c; 
}else{
	d = (a-b)*c; 
}
 
 printf("O resultado do calculo é: %d \n", d);
}