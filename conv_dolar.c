//Ler um valor em real e converter para dólar e euro usando funções
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int op;
float real, convertido;

float dolar (float x){
	float conversao;
	conversao = real * 3.12;
	return conversao;
}

float euro (float x){
	float conversao;
	conversao = real * 3.41;
	return conversao;
}

main(){
	
	printf("Digite o valor em reais a ser convertido: ");
	scanf("%f",&real);
	
	printf("Deseja converter para dolares ou euros?\n1 - Dolar\n2 - Euro\n");
	scanf("%d",&op);
	
	if (op == 1){
		convertido = dolar(real);
		printf("Resultado da conversão em dolares: %.2f\n",convertido);
	} else if (op == 2){
		convertido = euro(real);
		printf("Resultado da conversão em euros: %.2f\n",convertido);
	} else printf("Opcao invalida. ");
	
	system("pause");
}
