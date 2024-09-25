/*10-Crie um programa que use uma macro para definir o valor de PI e, 
a partir disso, calcule a área de um círculo. O programa deve pedir ao usuário o raio do círculo.*/
#include <stdio.h>
#include <math.h>
#define PI 3.1415

/*Crie um programa que use uma macro para definir o valor de PI e, a partir disso, calcule a área de um círculo. O programa deve pedir ao usuário o raio do círculo.*/

int main(){
  float raio, area;
    printf("digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    printf("a area do circulo e: %.2f", area);
   
}
