#include <stdio.h>

main(){
	int idade = 0, i;
	float altura, media = 0;
	
	while (idade >= 0){
		printf("Digite a altura: ");
		scanf("%f",&altura);
		printf("Digite a idade: ");
		scanf("%d",&idade);
		
		
		if(idade >= 50){
			i++;
			media += altura;
		}
	}
	
	media /= i;
	printf("A media das alturas de pessoas com mais de 50 eh %.2f", media);
	
	getch();
}
