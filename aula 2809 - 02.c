#include<stdio.h>
#include<conio.h>
#define lmax 3
#define cmax 3

/* Faça um programa que armazene em uma matriz "a" nove números
e ao final exiba o maior número e a posição em que ele se encontra */

main(){
    int a[lmax][cmax], y, x, m = 0, posl, posc;

    for(y = 0; y < cmax; y++){
        for(x = 0; x < lmax; x++){
            printf("Digite o numero da coluna %d linha %d: ", y,x);
            scanf("%d", &a[x][y]);
        }
    }
    for(y = 0; y < cmax; y++){
        for(x = 0; x < lmax; x++){
            if(a[x][y] > m){
                m = a[x][y];
                posl = x;
                posc = y;
        }
        }
    }
    printf("O maior numero eh %d e se localiza na coluna %d linha %d", m,posc,posl);
    getch();
}
