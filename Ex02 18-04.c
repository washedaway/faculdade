//Exercício 1 da Página 90 do Livro de FPR - Estrutura de Seleção Ternária

#include <stdio.h>

main() {
	float n1, n2, n3, n4, med;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f",&n2);
	printf("\nDigite a terceira nota: ");
	scanf("%f",&n3);
	printf("\nDigite a quarta nota: ");
	scanf("%f",&n4);
	
	med = (n1 + n2 + n3 + n4) / 4;
	printf("A media eh %.1f",med);
	(med >= 7)? printf("\nAPROVADO") : printf("\nREPROVADO");
	
	getch();
}
