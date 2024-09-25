/*3-Crie uma func¸a~o que receba tre^s nu´meros inteiros a, b, c, sendo a maior
que 1. A func¸a~o devera´ somar todos os inteiros entre b e c que sejam
divisi´veis por a (inclusive b e c) e retornar o resultado para a func¸a~o
principal.
*/
#include <stdio.h>
int soma(int a, int b, int c){ 
	int aux;
	int somatorio = 0;
	int i;
	if(c<b){
		aux=b;
		b=c;
		c=aux;
	}
	for (i=b+1; i<c; i++){
		if(i%a==0){
		somatorio += i;
	}
		
	}
	return somatorio;
}

int main(){
	int a, b, c;
	printf("Digite o numero a: ");
	scanf("%d", &a);
	printf("Digite o numero b: ");
	scanf("%d", &b);
	printf("Digite o numero c: ");
	scanf("%d", &c);
	
	printf("a soma e : %d", soma(a, b, c));
	
 return 0;
	
}
