// Programa 49: Exerc�cio 01 do Estudo Dirigido 5 - Estrutura de Repeti��o While
// Usado quando a quantidade de repeti��es for indeterminada
// Possui um flag de sa�da no formato de condi��o, ou seja, enquanto a condi��o retornar verdadeiro ela continua a executar
// A execu��o � interrompida quando a condi��o retornar falso
// O flag de sa�da sempre ser� o contr�rio da condi��o

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
