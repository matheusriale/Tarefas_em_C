#include <stdio.h>
#include <stdlib.h>
/*
c) Um programa para imprimir os primeiros n números primos, onde n é fornecido via teclado, utili-
zando a função implementada em (a). */

int primo(int numero){
    int cont;
    cont = 0;
    for(int i = 2; i < numero; i++){
        if (numero%i == 0){
            cont = cont + 1;}}
    if (cont == 0){
        printf("%d eh primo\n",numero);
        return 1;
    }
    else{
        return 0;
    }
}

/* Item c) */

int main(){
    int numero;
    int cont = 0;
    int j = 1;
    printf("Digite um numero: ");
    scanf("%d",&numero);
    while(cont < numero){
        if (primo(j) == 1){
            j = j + 1;
            cont = cont + 1;

    }
        else{
                j = j + 1;
    }
    }}







