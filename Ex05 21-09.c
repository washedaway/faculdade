#include <stdio.h>
#include <conio.h>
#define max 10

/* Programa 5: construir um programa em C que leia 20 números e armazene 10 em 
um vetor e 10 em outro vetor e armazene em um terceiro vetor a soma dos outros 
2,  posição a posição. */

main(){
	int i, num1[max], num2[max], soma[max];
	
	for(i = 0; i < max; i++){
		printf("Digite o %d numero do vetor 1: ", i+1);
		scanf("%d",&num1[i]);
	}
	
	for(i = 0; i < max; i++){
		printf("Digite o %d numero do vetor 2: ", i+1);
		scanf("%d",&num2[i]);
	}
	
	for(i = 0; i < max; i++){
		soma[i] = num1[i] + num2[i];
		printf("A soma dos vetores na posicao %d eh: %d\n", i+1,soma[i]);
	}
	getch();
}
