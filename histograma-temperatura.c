/*9-Codifique a função histograma(t) , que exibe um histograma da variação da temperatura durante a semana. 
Por exemplo, se as temperaturas em t forem 19, 21, 25, 22, 20, 17 e 15°C, a função deverá exibir:*/

#include <stdio.h>

void histograma() {
    int temperatura;
    int i;
    int tempDomingo, tempSegunda, tempTerca, tempQuarta, tempQuinta, tempSexta, tempSabado;

    for (i = 0; i < 7; i++) {
        char dia;
        switch (i) {
            case 0: dia = 'D'; break; 
            case 1: dia = 'S'; break;
            case 2: dia = 'T'; break; 
            case 3: dia = 'Q'; break;
            case 4: dia = 'Q'; break;
            case 5: dia = 'S'; break; 
            case 6: dia = 'S'; break; 
        }

        while (1) {
            printf("Digite a temperatura do dia %c: ", dia);
            scanf("%d", &temperatura);

            // Valida a temperatura
            if (temperatura >= 0 && temperatura <= 50) {
                switch (i) {
                    case 0: tempDomingo = temperatura; break;
                    case 1: tempSegunda = temperatura; break;
                    case 2: tempTerca = temperatura; break;
                    case 3: tempQuarta = temperatura; break;
                    case 4: tempQuinta = temperatura; break;
                    case 5: tempSexta = temperatura; break;
                    case 6: tempSabado = temperatura; break;
                }
                break; // Sai do loop se a entrada é válida
            } else {
                printf("Temperatura inválida, deve ser entre 0 e 50\n");
            }
        }
    }

    // Exibe o histograma após a coleta
    printf("\nHistograma da Semana\n");
    for (i = 0; i < 7; i++) {
        switch (i) {
        	int j;
            case 0: printf("D: "); for (j = 0; j < tempDomingo; j++) putchar(223); printf("\n");break;
            case 1: printf("S: "); for (j = 0; j < tempSegunda; j++) putchar(223); printf("\n");break;
            case 2: printf("T: "); for (j = 0; j < tempTerca; j++) putchar(223); printf("\n");break;
            case 3: printf("Q: "); for (j = 0; j < tempQuarta; j++) putchar(223); printf("\n");break;
            case 4: printf("Q: "); for (j = 0; j < tempQuinta; j++) putchar(223); printf("\n");break;
            case 5: printf("S: "); for (j = 0; j < tempSexta; j++) putchar(223); printf("\n"); break;
            case 6: printf("S: "); for (j = 0; j < tempSabado; j++) putchar(223); printf("\n"); break;
        }
    }
}

int main() {
    histograma();
    return 0;
}
