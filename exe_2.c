#include<stdio.h> 

int main(){

	int a,b,c,max;

	printf("entre com três valores \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);  

	if(a>b){
		if(a>c){
			max = a;
		}else{
			max = c;
		}
	}else{						
		if(b>c){
			max = b; 
		}else{
			max = c ;
		}
	}
	printf("valor maior entre %d %d %d é  %d", a,b,c, max); 

}