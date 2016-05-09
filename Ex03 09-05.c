// Programa 46: Exercício 7 do estudo dirigido 4 - Acumulação

#include <stdio.h>

main() {
	
	int i, b, e, r = 1; // b = base - e = expoente - r = resultado
	
	printf("Digite, respectivamente, a base e o expoente\n");
	scanf("%d",&b);
	scanf("%d",&e);
	
	for(i = 1; i <= e; i++){
	r *= b;
}
	printf("\nO resultado eh %d",r);
	
	getch();
}
