#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,m[6],n[1000]; //v-->n do usuario, m-->n da megasena
    int cont = 0;
    int cont2 = 0;
    printf("Digite N:");
    scanf("%d",&N);

    int v[N];

    if (N<6||N>10){
        return 0; //acaba programa pois n>10 ou n<6
    }

    else

        for(int i = 0;i < N ; i++ ){
            printf("Digite o %d numero escolhido:\n",(i+1));
            scanf("%d",&v[i]);
        }
        //for(int i = 0 ; i < N ;i++){
            //printf("\n%d",v[i]);
        for(int i = 0;i < 6 ; i++ ){
            printf("Digite o %d numero da megasena:\n",(i+1));
            scanf("%d",&m[i]);}

        for(int i = 0; i < N; i++){
            for(int j = 0; j < 6 ; j++){
                if (v[i] == m[j]){
                    n[cont] = v[i];
                    cont++;}
            }
        }
        printf("Quantidade de acertos: %d\n", cont);
        printf("Numeros que o usuario acertou:\n");
        for(int i = 0 ; i < cont ; i++){
            printf("%d\n",n[i]);}



        if (cont == 4){
            printf("Quadra!");
        }
        if (cont == 5){
            printf("Quina!");
        }
        if (cont == 6){
            printf("Mega-sena!");
        }











}
