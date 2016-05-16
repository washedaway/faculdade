// Programa

#include <stdio.h>

main() {
	float preco, parcela, total;
	int i;
	
	printf("Digite o preco do carro: R$ ");
	scanf("%f",&preco);
	
	printf("\nA vista: R$ %.2f\n", preco * 0.8);
	
	for (i = 6; i <= 60; i += 6){
		total = preco + (preco * i / 2) / 100;
		parcela = total / i;
		printf("\n%2d x %8.2f = %.2f",i,parcela,total);
	}
	
	getch();
}
