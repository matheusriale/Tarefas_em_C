#include <stdio.h>
#include <stdlib.h>
/*Implemente o solicitado abaixo, com rela��o a n�meros primos:
a) Uma fun��o que determine se um n�mero � ou n�o primo.

b) Um programa para imprimir todos os n�meros primos menores que um valor x, fornecido via te-
clado, utilizando a fun��o implementada em (a).



/* Item a) */
int primo(int numero){
    int cont;
    cont = 0;
    for(int i = 2; i < numero; i++){
        if (numero%i == 0){
            cont = cont + 1;}}
    if (cont == 0){
        printf("%d eh primo\n",numero);

         //� primo

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








