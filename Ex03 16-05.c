// Programa 50: Exercício 2 do Estudo Dirigido 5

#include <stdio.h>

main() {
	
	int i = 0;
	float nota = 0, media = 0, soma = 0;
	
	while (nota >= 0 && nota <= 10){
		printf("Digite a nota: ");
		scanf("%f",&nota);
		printf("Nota = %.1f\n",nota);
		
		if (nota >= 0 && nota <= 10){
			soma += nota;
			i++;
		}
	}
	
	media = soma / i;
	printf("A media das notas eh %.1f",media);
	
	getch();
}
