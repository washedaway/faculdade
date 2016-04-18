//Exercício 4 do Estudo Dirigido 2 - Estrutura de Seleção Ternária

#include <stdio.h>

main() {
	int n;
	
	printf("Digite o numero: ");
	scanf("%d",&n);
	
	(n % 2 == 0)? printf("\nPAR") : printf("\nIMPAR");
	
	getch();
}
