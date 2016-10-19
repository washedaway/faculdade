#include <conio.h>
#include <stdio.h>
#define max 10

int mat[max], idade[max], i, maior;
float media;

/* Construir um programa que leia a matrícula e a idade de 10 alunos e ao final informe:
 * A maior idade
 * A média das idades
 * A matrícula e a idade dos alunos com idade maior que a média
 CONSTRUIR UMA VERSÃO USANDO VETOR E OUTRA USANDO MATRIZ

 VERSÃO VETOR */

main (){
	for(i = 0; i < 10; i++){
		printf("Digite respectivamente a matricula e a idade");
		scanf("%d",&mat[i]);
		scanf("%d",&idade[i]);
		if(idade[i] > maior){
			maior = idade[i];
		}
		media += idade[i];
	}

	getch();
}
