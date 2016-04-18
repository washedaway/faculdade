//Exercício 6 da Estudo Dirigido 2 - Estrutura de Seleção Ternária

#include <stdio.h>

main() {
	float sal, desc;
	char sexo;
	
	printf("Digite o salario bruto: ");
	scanf("%f",&sal);
	printf("\nDigite o sexo: ");
	scanf(" %c",&sexo);
	
	sexo = toupper(sexo);
	
	desc = (sexo == 'M')? sal * 0.05 : sal * 0.03;
	
	printf("\nDesconto: R$ %.2f",desc);
	printf("\nSalario liquido: R$ %.2f",sal - desc);
	
	getch();
}
