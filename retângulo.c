/*7-Codifique a função retangulo(m,n) , que exibe um retângulo com altura m e largura n.*/
#include <stdio.h>

int retangulo(int m, int n){
	int largura, altura;
	
	for(largura=1; largura <= m; largura++){
		
		for(altura=1; altura <= n; altura++){
			
			putchar((largura > 1 && largura < m && altura > 1 && altura < n) ? 000 : 003);
		}
		printf("\n");
	}
	return retangulo;
}

int main()
{
    int m, n;
    printf("Digite a largura do retangulo: ");
    scanf("%d", &m);
    printf("Digite a altura do retanugol: ");
    scanf("%d", &n);
    
    return retangulo(m, n);


}
