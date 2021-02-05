#include <stdio.h>
#include <stdlib.h>

int mdc(int dividendo,int divisor)
{   int resto, q_inteiro, mdc,divisor_or,dividendo_or, x;

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

    return x;
}

int main(){

    int x,y, z, res;
    printf("Digite 3 numeros para calcularmos o MDC:");
    scanf("%d %d %d",&x,&y,&z);

    res = mdc(mdc(x,y),z);

    printf("O mdc de %d, %d e %d eh igual a: %d",x,y,z,res);


    return 0;

}

