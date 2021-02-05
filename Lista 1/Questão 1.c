#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,x;
    printf("Digite 2 numeros");
    scanf("%f %f",&a,&b);
    if (b == 0){
        printf("Erro, denominador não pode ser 0");
    }
    else{
        x = a/b;
        printf("a/b = %f", x);
    }
    return 0;
}
