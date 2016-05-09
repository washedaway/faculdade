// Programa 47: Exercício 9 do estudo dirigido 4 - Passo Negativo

#include <stdio.h>

main() {
	int i, n, r = 1;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	for (i = n; i >= 1; i--){
		r *= i;
	}
	printf("A fatorial de %d eh %d",n,r);
	getch();
} 
