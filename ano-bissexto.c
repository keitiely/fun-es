/*12- Escreva um programa com uma função chamada bissexto() que recebe um ano como parâmetro e retorna 1 
se o ano for bissexto e 0 se não for. O programa deve pedir um ano ao usuário e dizer se ele é bissexto ou não.*/
#include <stdio.h>
int bixesto(int ano){
  if(ano%4==0){
      return 1;
  }else{
      return 0;
  }
}

int main(){
    int n;
    printf("digite um ano: ");
    scanf("%d", &n);

    if(bixesto(n)==1){
        printf("é bissexto!");
    }else{
        printf("não é bissexto!");
    }
   
}
