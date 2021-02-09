#include <stdlib.h>
#include <stdio.h>
#include "dinamica.h" // Onde estarão os protótipos da API

void *criar_vetor(int tamanho){
    double *vetor = (double*)malloc((tamanho+1)*sizeof(double));
    ((double*)vetor)[0] = tamanho;
    return vetor;

}
double obter_vetor(void*mem,int x){
    return ((double*)mem)[x];

}
int atribuir_vetor(void*mem,int x,double valor){
    int tamanho = ((double*)mem)[0];

    if (x>=tamanho || x<0){
        return 0;
    }
    else{
        ((double*)mem)[x] = valor;
        return 1;
    }



}
void liberar_vetor(void *mem){
    free(mem);

}
 // L C 2 3 4 5
void *criar_matriz(int tamanho_x, int tamanho_y){
    double *matriz = (double*)malloc(((tamanho_x*tamanho_y)+2)*sizeof(double)); // L C 2 3 4 5
    matriz[0] = tamanho_x;
    matriz[1] = tamanho_y;

    return matriz;

}
// 012345
// 0 1
// 2 3
// 4 5
double obter_matriz(void *mem, int x, int y){
    int tamanho_linha = ((double*)mem)[0];
    return *(((double*)mem + 2) + x*(tamanho_linha - 1 ) + y);

}  // L C 2 3 4 5
int atribuir_matriz(void *mem, int x, int y, double valor){
    int tamanho_linha = ((double*)mem)[0];
    int tamanho_coluna = ((double*)mem)[1];
    if ( ( x>= tamanho_linha || x < 0 ) || ( y >=tamanho_coluna || y < 0 ) ){
        return 0;
    }
    else{
        *(((double*)mem + 2) + x*(tamanho_linha - 1 ) + y) = valor;
        return 1;
    }


}
void liberar_matriz(void *mem){
    free(mem);

}
