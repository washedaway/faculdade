#include <conio.h>
#include <stdio.h>
#define max 10

int mat[max], idade[max], i, maior;
float media;

/* Construir um programa que leia a matr�cula e a idade de 10 alunos e ao final informe:
 * A maior idade
 * A m�dia das idades
 * A matr�cula e a idade dos alunos com idade maior que a m�dia
 CONSTRUIR UMA VERS�O USANDO VETOR E OUTRA USANDO MATRIZ

 VERS�O VETOR */

main (){
	for(i = 0; i < 10; i++){
		printf("Digite respectivamente a matricula e a idade: ");
		scanf("%d",&mat[i]);
		scanf("%d",&idade[i]);
		
		if(idade[i] > maior){
			maior = idade[i];
			}
		media += idade[i];
		}
	
	media /= 10;
	
	printf("A maior idade eh: %d\n", maior);
	printf("A media das idades eh: %.1f\n", media);
	
	printf("Alunos com idade maior que a media: \n");
	for(i = 0; i < 10; i++){
		if(idade[i] > media){
			printf("Matricula: %d\n Idade: %d\n\n", mat[i], idade[i]);
		}
	}
	
	getch();
}
