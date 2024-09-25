/*11- Defina uma macro chamada QUAD(n) que calcula o quadrado de um número.
Escreva um programa que leia um número do usuário e mostre o quadrado desse número utilizando a macro.*/

#include <stdio.h>
#include <math.h>
#define QUAD(n) n*n

int main(){
  int x;

    printf("Digiite um numero: ");
    scanf("%d", &x);

    printf("o quadrado de %d e: %d", x, QUAD(x));
   
}
