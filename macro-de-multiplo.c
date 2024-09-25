/*13-Crie uma macro chamada MULTIPLO(a, b) que retorne 1 se o número a for múltiplo de b e 0 caso contrário. 
O programa deve solicitar dois números e usar essa macro para verificar se o primeiro número é múltiplo do segundo.*/
#include <stdio.h>
#include <math.h>
#define multiplo(a,b) (a%b==0) || (b%a==0)


int main(){
   int n1, n2;
    printf("digite dois numeros: ");
    scanf("%d %d", &n1, &n2);

    if(multiplo(n1, n2) == 1){
        printf("o numero %d e multiplo de %d", n1, n2);
    }else{
        printf("o numero %d nao e multiplo de %d", n1, n2);
    }
}
