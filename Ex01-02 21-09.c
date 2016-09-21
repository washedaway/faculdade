#include <stdio.h>
#include <conio.h>
#define max 5

//Programa 2: construir um programa em C que leia 5 números inteiros e armazene em um vetor e imprima todos os valores armazenados. Utilizar estrutura de repetição.

main(){
	int i, num[max];
	
	for(i = 0; i < max; i++){
		printf("Digite um numero: ");
		scanf("%d",&num[i]);
	}
	
	for(i = 0; i < max; i++){
		printf("O %d numero eh: %d\n", i+1,num[i]);
	}
	getch();
}
