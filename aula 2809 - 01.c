#include<stdio.h>
#include<conio.h>
#define lmax 3
#define cmax 3

/* Faça um programa que armazene em uma matriz "a" nove números
e ao final exiba os valores de sua diagonal principal */

main(){
    int a[lmax][cmax], y, x;

    for(y = 0; y < cmax; y++){
        for(x = 0; x < lmax; x++){
            printf("Digite o numero da coluna %d linha %d: ", y,x);
            scanf("%d", &a[x][y]);
        }
    }
    for(y = 0; y < cmax; y++){
        for(x = 0; x < lmax; x++){
            if(y == x){
                printf("%d\n", a[x][y]);
        }
        }
    }
    getch();
}
