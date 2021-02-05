#include <stdio.h>
#include <stdlib.h>

int main()
{   int divisor, dividendo, resto, q_inteiro, mdc,divisor_or,dividendo_or, x;

    printf("Digite o dividendo e o divisor:");
    scanf("%d %d",&dividendo,&divisor);
    divisor_or = divisor;
    dividendo_or = dividendo;
    x = dividendo_or;
    mdc = 99; //
    while (mdc > 0){

        q_inteiro = dividendo/divisor;
        resto = dividendo - (q_inteiro*divisor);
        mdc = resto;
        if (mdc > 0){
            x = mdc;
        }
        dividendo = divisor;
        divisor = resto;
    }

    printf("O maior divisor comum entre %d e %d eh:\n%d ",dividendo_or, divisor_or, x  );

    return 0;
}
