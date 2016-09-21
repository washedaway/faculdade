#include <stdio.h>
#include <conio.h>
#define max 10

//Programa 3: construir um programa em C que leia 10 números inteiros e imprima todos os valores na ordem inversa a ordem de leitura.

main(){
	int i, num[max];
	
	for(i = 0; i < 10; i++){
		printf("Digite um numero: ");
		scanf("%d",&num[i]);
	}
	
	for(i = 9; i >= 0; i--){
		printf("O numero %d eh: %d\n", i+1,num[i]);
	}
	getch();
}
