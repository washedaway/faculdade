#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// Faça um programa que leia as três notas de um aluno e, ao final, informe a nota média do aluno.
float media(float x, float y, float z){
	float m;
	m = (x + y + z) /3;
	return m;
}

main(){
	float n1, n2, n3, med;
	
	printf("Digite a primeira nota do aluno: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f",&n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%f",&n3);
	
	med = media(n1, n2, n3);
	
	printf("A media do aluno eh: %.1f\n", med);
	
	system("pause");
}
