/*15-Crie uma macro chamada ABS(n) que retorne o valor absoluto de um número. 
O programa deve solicitar um número (positivo ou negativo) ao usuário e utilizar a macro para exibir o valor absoluto.*/
#include <stdio.h>
#define ABS(n) ((n) < 0 ? -(n) : (n))


int main(){
   int num;
    printf("digite um numero: ");
    scanf("%d", &num);

    printf("o valor absoluto de %d e: %d", num, ABS(num));
}

