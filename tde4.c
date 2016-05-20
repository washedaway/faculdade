#include <stdio.h>

main() {
	int i, idade, fe, qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, qtd5 = 0;
	
	for(i = 1; i <= 30; i++){
	printf("Digite a idade da pessoa %d : ",i);
	scanf("%d",&idade);
	printf("Idade: %d\n",idade);
	
	if(idade > 0 && idade <= 15){
		fe = 1;
	  } else if (idade > 15 && idade <= 30){
		fe = 2;
	    } else if (idade > 30 && idade <= 45) {
			fe = 3;
			} else if (idade > 45 && idade <= 60){
				fe = 4;
			} else if (idade > 60) {
				fe = 5;}
			
	switch(fe){
	case 1: printf("Faixa etaria 1\n"); break;
	case 2: printf("Faixa etaria 2\n"); break;
	case 3: printf("Faixa etaria 3\n"); break;
	case 4: printf("Faixa etaria 4\n"); break;
	case 5: printf("Faixa etaria 5\n"); break;
	default: printf("Idade invalida\n");
	  }
	  if (fe = 1){
			qtd1++;
	  } else if (fe = 2){
			qtd2++;
			} else if (fe = 3){
				qtd3++;
				} else if (fe = 4){
					qtd4++;
				} else if (fe = 5){
					qtd5++;
				}
	}
	
	printf("Quantidade de pessoas na faixa etaria 1: %d",qtd1);
	
	getch();
}
