// Programa 44: Exerc�cio 4 do estudo dirigido 4 - Estrutura de Repeti��o For

#include <stdio.h>

main() {
	int i = 1, pos = 1, n, maior; // pos = posi��o do passo
		printf("Digite o %d numero: ", i); //printf fora do for serve para permitir que n�meros negativos sejam atribu�dos e n�o d� erro
		scanf("%d",&maior);
	
	for (i = 2; i <= 10; i++) {
		printf("Digite o %d numero: ", i);
		scanf("%d",&n);
		
		if (n > maior){
			maior = n;
			pos = i;
		}
	}
	
	printf("\nO maior numero eh %d",maior);
	printf("\nO maior numero esta na posicao %d",pos);
	
	getch();
}
