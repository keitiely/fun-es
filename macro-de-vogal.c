/*14-Defina uma macro chamada IS_VOGAL(c) que retorne 1 se o caractere c for uma vogal (minúscula ou maiúscula),
e 0 caso contrário. O programa deve pedir uma letra ao usuário e verificar se é uma vogal utilizando a macro.*/
#include <stdio.h>
#define IS_VOGAL(c) (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')


int main(){
    char letra;
    printf("digite uma letra: ");
    scanf("%c", &letra);

    if(IS_VOGAL(letra) == 1){
        printf("é uma vogal");
    }else{
        printf("não é uma vogal");
    }
}
