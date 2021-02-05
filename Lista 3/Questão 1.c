#include <stdio.h>
#include <stdlib.h>
/*. Faca uma fun¸c˜ao recursiva que receba um valor inteiro positivo e mostre a convers˜ao desse n´umero
para a nota¸c˜ao bin´aria.*/

int binario(int numero){
    int resto,res,incremento;
    incremento = 1;
    res = 0;
    while (numero != 1){

        resto = numero%2;

        numero = numero/2;

        res = resto*incremento + res;

        incremento = incremento * 10;}

    res = res + incremento;
    return res;

}

int main()
{   int valor_binario, numero;
    scanf("%d",&numero);
    valor_binario = binario(numero);

    printf("%d",valor_binario);

}
