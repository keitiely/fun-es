/*1-Faça um programa contendo uma sub-rotina 
que retorne 1 caso o número digitado seja positivo ou zero se negativo*/

#include <stdio.h>

int subrotina(int num)
{  if(num>=0){
	return 1;
	}
	
	else{
	return 0;
	}
}

int main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);

	printf("%d", subrotina(num));

}
