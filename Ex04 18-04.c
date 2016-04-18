//Exercício 8 do Estudo Dirigido 2 - Estrutura de Seleção Ternária

#include <stdio.h>

main() {
	float sal, aum;
	
	printf("Digite o salario: ");
	scanf("%f",&sal);
	
	
	aum = (sal <= 300)? sal * 0.35 : sal * 0.15;
	
	printf("\nAumento: R$ %.2f",aum);
	printf("\nSalario total: R$ %.2f",sal + aum);
	
	getch();
}
