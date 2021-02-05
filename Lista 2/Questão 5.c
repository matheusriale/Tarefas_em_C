#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva uma função de potenciação recursiva, considerando o expoente como sendo um valor inteiro
positivo (�$, � > 0). A função deve seguir o protótipo: double pot (double x, int k). Escreva uma

função main para testar sua implementação. Compare o resultado da sua função com o valor retorna-
do pela função de potenciação pow, da biblioteca de math.h padrão de C.
*/

double pot(double x,int k){
    double var = x ;
    for (int i = 1 ; i < k  ; i ++ ){
        var = var * x;

    }
    return var;
}

int main()
{   double numero,potencia;
    int expoente;
    printf("Digite um numero e seu expoente: ");
    scanf("%lf %d",&numero,  &expoente);


    printf("Resultado:%.2lf ", pot(numero,expoente));
    return 0;


}
