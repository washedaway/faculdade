// Programa 45: Exercício 5 do estudo dirigido 4

#include <stdio.h>

main () {
	int i;
	float nota, maior = 0, menor = 10;
	
	for (i = 1; i <= 10; i++){
		printf("Digite a nota do aluno %d : ",i);
		scanf("%f", &nota);
		
		if (nota > maior)
		maior = nota;
		else if (nota < menor)
			menor = nota;
	}
	
	printf("\nMaior nota: %.1f",maior);
	printf("\nMenor nota: %.1f",menor);
	getch();
}
