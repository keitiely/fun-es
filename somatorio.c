/*2-Faça uma função que receba dois números inteiros e positivos por parâmetro
e retorne a soma dos N números inteiros existentes entre eles.*/
#include <stdio.h>

int soma(int a, int b){ 
	int aux;
	int somatorio = 0;
	if(b<a){
		aux=a;
		a=b;
		b=aux;
	}
	
	int i;
	for (i=a+1; i<b; i++){
		somatorio += i;
		
	}
	return somatorio;
}

int main(){
	int a, b;
	printf("Digite um numero: ");
	scanf("%d", &a);
	printf("Digite outro numero: ");
	scanf("%d", &b);
	
	printf("a soma e : %d", soma(a, b));
	
 return 0;
	
}
