// Programa 50: Exercício 2 do Estudo Dirigido 5

#include <stdio.h>

main() {
	
	float nota = 1;
	
	while (nota >= 0 || nota <= 10){
		printf("Digite a nota: ");
		scanf("%f",&nota);
		printf("Nota = %.1f\n",nota);
		
	}
	
	
	getch();
}
