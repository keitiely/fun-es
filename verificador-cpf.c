/*8-Codifique a função cpf(n,d) que devolve verdade só se o CPF n tem dígito verificador d . 
Use o método descrito abaixo para calcular o dígito verificador do CPF do seguinte modo:
Suponha CPF 345702159.
Dígito verificador será a soma de todos os algarismos, multiplique os dígitos dos resultados,
subtraia o último dígito com o primeiro.
calculamos o primeiro dígito a = dv(345702159) = 7.
    3+4+5+7+0+2+1+5+9 = 36. 3x6=18. 8-1 = 7 calculamos o segundo dígito b = dv(3457021597) = 1.
          3+4+5+7+0+2+1+5+9+7= 43. 4x3=12. 2-1 = 1
Então, número completo do CPF é 34570215971.*/


#include <stdio.h>

int calcular_primeiro_digito(int cpf) {
    int soma = 0;

    // Soma os 9 dígitos do CPF
    for (int i = 0; i < 9; i++) {
        int digito = cpf % 10;  // Obtém o último dígito
        soma += digito;         // Soma
        cpf /= 10;              // Remove o último dígito
    }
   
    // Multiplica os algarismos da soma
    int d1 = soma % 10;      // Último dígito da soma
    int d2 = soma / 10;      // Primeiro dígito da soma
    int produto = d1 * d2;   // Multiplicação
   
    // Subtrai o último algarismo pelo primeiro
    int primeiro_digito = (produto % 10) - (produto / 10);

     return primeiro_digito;
}

int calcular_segundo_digito(int cpf, int primeiro_digito) {
    int soma = 0;

    // Soma os 9 dígitos do CPF e o primeiro dígito
    for (int i = 0; i < 9; i++) {
        int digito = cpf % 10;      // Obtém o último dígito
        soma += digito;             // Soma
        cpf /= 10;                  // Remove o último dígito
    }

    soma += primeiro_digito;        // Adiciona o primeiro dígito
   
    // Multiplica os algarismos da nova soma
    int d1 = soma % 10;            // Último dígito da soma
    int d2 = soma / 10;            // Primeiro dígito da soma
    int produto = d1 * d2;         // Multiplicação
     
    // Subtrai o último algarismo pelo primeiro
    int segundo_digito = (produto % 10) - (produto / 10);

    return segundo_digito;
}

int main() {
    int cpf;
    int primeiro_digito, segundo_digito;

    printf("Digite os 9 primeiros dígitos do CPF: ");
    scanf("%d", &cpf);

    // Calcular os dígitos verificadores
    primeiro_digito = calcular_primeiro_digito(cpf);
    segundo_digito = calcular_segundo_digito(cpf, primeiro_digito);

    // Exibir o CPF completo
    printf("O CPF completo é: %d-%d%d\n", cpf, primeiro_digito, segundo_digito);

    return 0;
}
