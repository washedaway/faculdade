// Programa 49: Exercício 01 do Estudo Dirigido 5 - Estrutura de Repetição While
// Usado quando a quantidade de repetições for indeterminada
// Possui um flag de saída no formato de condição, ou seja, enquanto a condição retornar verdadeiro ela continua a executar
// A execução é interrompida quando a condição retornar falso
// O flag de saída sempre será o contrário da condição

#include <stdio.h>

main() {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	while (n != 0){
		printf("O triplo de %d eh %d\n",n,n*3);
		printf("Digite um numero: ");
		scanf("%d",&n);
	}
	
	getch();
}
