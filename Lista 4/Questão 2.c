

/*2. Faça um algoritmo que receba um determinado valor N e, em seguida, receba N valores
inteiros do usuário. O algoritmo deverá determinar se estes números, na ordem em que
foram entrados, são ou não uma progressão geométrica. Se sim, mostrar a razão desta
progressão geométrica. Considere N no intervalo [0;1000].*/


#include <stdio.h>
#include <stdlib.h>



int main()
{
    int N,q;
    int resposta = 1;


    printf("Digite a quantidade de numeros:");
    scanf("%d",&N);

    int n[N];

    for(int i = 0; i < N ; i++ ){
        scanf("%d",&n[i]);}

    q = n[1]/n[0];

    for (int j = 0; j < N-1 ; j++){

        if (q != (n[j+1])/(n[j])  ){
            resposta = 0;}
    }



    if (resposta == 0){
        printf("Nao eh progressao geometrica");}
    if (resposta == 1){
        printf("\nA razao eh: %d\n",q);
        printf("Eh progressao geometrica");
    }

}
