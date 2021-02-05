#include <stdio.h>
#include <stdlib.h>

#define Pi 3.14

/*4) As fórmulas para o cálculo do volume e da área de uma esfera são: � = !
"
��" e � = 4��#. Escreva as
funções para calcular o volume e a área de uma esfera. (Dica: defina � como uma constante #define
Pi 3.14)*/

float volume(float r){
    float v;
    v = 4*((r*r*r)/3)*Pi ;
    return v;

}

float area(float r){
    float a;
    a = 4 * r*r *Pi;
    return a;
}


int main()
{   float r,vol,ar;
    printf("Digite o raio:  ");
    scanf("%f",&r);
    vol = volume(r);
    ar = area(r);

    printf("Area:%f\nVolume:%f\n",ar , vol);
    return 0;
}
