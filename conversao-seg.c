/*4. Fac¸a uma func¸a~o que receba um u´nico valor representando segundos.
Essa func¸a~o devera´
converte^-lo para horas, minutos e segundos. Os segundos devem ser
passados como para^metro
*/
#include <stdio.h>
void conversao(int seg){ 
	int hrs, min;
	min= (seg / 60);
	hrs= (min / 60); 
	
	printf("A conversao de %d segundos e %d minutos e %d horas", seg, min, hrs);
}

int main(){
	int seg, hrs, min;
	printf("Digite o numero o valor em segundos: ");
	scanf("%d", &seg);
	
 	conversao(seg);
 	
	
}
