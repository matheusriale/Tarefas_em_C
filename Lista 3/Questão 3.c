#include <stdio.h>
#include <stdlib.h>

/*3. O fatorial quadruplo de um numero N e dado por:
(2n)! // n!
Faca uma func˜ao recursiva que receba um numero inteiro positivo N e retorne o fatorial quadruplo
desse numero.
*/

int fatorial(int num){
    int cont,fat;
    cont = num;
    if (num == 1){
        return 1;
    }
    else{
        while (cont  > 1){
            fat = num * fatorial(num - 1);
            cont = cont -1 ;
    }
    return fat;
    }
}


int main()
{   int num,fat_quad;
    printf("Digite um numero: \n");
    scanf("%d", &num);

    fat_quad = fatorial(2*num)/fatorial(num);

    printf("%d",fat_quad);

    return 0;
}
