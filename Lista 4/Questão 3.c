#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que receba do usuário um número inteiro positivo de até 10 dígitos e
mostre se este número é um palíndromo. Um palíndromo é um número que é igual a ele
próprio quando lido no sentido inverso. (Ex. 473848374 é um palíndromo). Utilizar apenas
vetores e variáveis numéricas ou lógicas.
*/


int main()
{   int num,r,d,v[10],cont,pali,j;//para numero,resto,d = variavel para os multiplos de 10.
    cont = 0;
    pali = 1;
    d = 10;
    printf("Digite o numero:");
    scanf("%d",&num);
    for(int i = 0; num > 0;i++){
        r = num%10;
        v[i] = r;
        num = num-r;
        num = num/d;
        d = d * 10;
        cont = cont + 1; // para guardarmos o tamanho do vetor
    }
    j = cont-1;
    for (int i = 0; i < j-1; i++){
        if (v[i]!= v[j]){
            pali = 0;
        j = j - 1;
        }
    }
    if (pali == 1){
        printf("Eh palindromo");
    }
    if (pali == 0){
        printf("Nao eh palindromo");
    }






    return 0;
}
