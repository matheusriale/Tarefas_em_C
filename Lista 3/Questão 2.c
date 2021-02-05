#include <stdio.h>
#include <stdlib.h>

/*
2. A func˜ao fatorial duplo  definida como o produto de todos os numeros naturais ımpares de 1 ate
algum numero natural ımpar N. Assim, o fatorial duplo de 5 e:
 5!! = 1 × 3 × 5 = 15
Faca uma func˜ao recursiva que receba um numero inteiro positivo impar N e retorne o fatorial duplo
desse numero.

*/
int fat_duplo(numero){
    int fat,i;
    fat = 1;
    for (i = 1 ; i <=numero ; i ++ ){
        fat = i*fat;
        i = i + 1;
    }
    return fat;
    }

int main()

{   int numero,res;
    printf("Digite um numero:");
    scanf("%d",&numero);
    res = fat_duplo(numero);
    printf("%d",res);

}
