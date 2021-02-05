#include <stdio.h>
#include <stdlib.h>
/*Implemente o solicitado abaixo, com relação a números primos:
a) Uma função que determine se um número é ou não primo.

b) Um programa para imprimir todos os números primos menores que um valor x, fornecido via te-
clado, utilizando a função implementada em (a).



/* Item a) */
int primo(int numero){
    int cont;
    cont = 0;
    for(int i = 2; i < numero; i++){
        if (numero%i == 0){
            cont = cont + 1;}}
    if (cont == 0){
        printf("%d eh primo\n",numero);

         //é primo

    }


}
/* Item b) */
int main (){
    int numero,n_teste;
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (int j = 2; j < numero; j++){
        n_teste = primo(j);

    }



}








