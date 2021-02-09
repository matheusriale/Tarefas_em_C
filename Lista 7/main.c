#include <stdlib.h>
#include <stdio.h>
#include "./dinamica.h"






int main(int narg, char *argv[]) {




    void *p_m, *p_v;

    //printf("Digite o tamanho do vetor")
    //scanf("%d",&tam);

    p_v = criar_vetor(16);
    atribuir_vetor(p_v, 8, 456.0);// Atribui o valor 456 na posicao 8 do vetor
    printf("A pos. 8 do vetor contem %f.\n", obter_vetor(p_v, 8));
    liberar_vetor(p_v);

    //Para matriz//
    p_m = criar_matriz(10,10);
    atribuir_matriz(p_m, 5, 4, 12.0); // Atribui o valor 12 na posicao (5,4)
    printf("A pos. (5,4) da matriz = %f.\n", obter_matriz(p_m, 5, 4));
    liberar_matriz(p_m);

    return EXIT_SUCCESS;
}
