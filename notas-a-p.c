#include <stdio.h>

int notas(float n1, float n2, float n3, char m){
	float media;
	
	switch (m){
	case 'A': 
	case 'a':
	media= (n1 + n2 + n3)/3;
	printf("A media aritmetica e: %.2f", media);
	break;

	case 'P':
	case 'p':
	media= ((n1*5) + (n2*3) + (n3*2))/10;
	printf("A media ponderada e: %.2f", media);
	break;
}
	return m;

}

int main(){
	float n1, n2, n3;
	char m;

	printf("Digite sua Nota 1: ");
	scanf("%f", &n1);
	printf("Digite sua Nota 2: ");
	scanf("%f", &n2);
	printf("Digite sua Nota 3: ");
	scanf("%f", &n3);
	
	while (getchar() != '\n');//limpar buffer do teclado
	printf("Digite A para media Aritmetica ou P para media Ponderada: ");
	scanf("%c", &m);

	return notas(n1, n2, n3, m);
}
