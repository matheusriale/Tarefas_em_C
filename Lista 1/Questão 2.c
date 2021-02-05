#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,q,resto;
    printf("Digite 2 numeros\n");
    scanf("%d %d" ,&a,&b);

    if (b != 0){
        q = a/b;
        resto = a - b*q; //resto = a%b;
        printf("Resultado inteiro da divisao: %d \n",q);
        printf("Resto: %d \n", resto);

    }

    return 0;
}
