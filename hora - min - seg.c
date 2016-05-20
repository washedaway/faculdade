#include <stdio.h>
 main() {
 

   int h,m,s,mt;
   
   printf("Digite a hora: ");
   scanf("%d", &h);
   h= h*60; 
  
   printf("Digite o minuto: ");
   scanf("%d", &m);
	mt= m + h;
   printf("Hora convertida para minuto: %dm \n",h);
   printf("Resultado da soma do minuto total com a conversao:%dm \n",h,mt);
   
   
   	s= mt*60;
   	 printf("Minuto total convertido para segundo: %ds \n",s);
   getch();
}
