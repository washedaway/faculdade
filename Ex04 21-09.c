#include <stdio.h>
#include <conio.h>
#define max 10

//Programa 4: construir um programa em C que leia o preço de 10 produtos e atualize e imprima cada preço em 15%.

main(){
	int i;
	float num[max], por = 0.15, numfinal[max];
	
	for(i = 0; i < 10; i++){
		printf("Digite um preco: ");
		scanf("%f",&num[i]);
	}
	
		for(i = 0; i < 10; i++){
		numfinal[i] = num[i] * por;
		printf("O preco %d atualizado eh %.2f\n", i+1,numfinal[i]);
	}
	getch();
}
