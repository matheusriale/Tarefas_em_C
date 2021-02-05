#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int *v,int tam)
{
    int aux = 0;
    for(int j = 0 ; j<tam;j++){

        for(int i = 0; i < tam - j; i++){
            if(v[i]>v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}




int main()
{   int tam;
    printf("Digite o tamanho do vetor: \n");

    scanf("%d",&tam);

    int v[tam];


    for (int j = 0; j < tam ; j++){

        printf("Digite o elemento da posicao %d do vetor:", j);
        scanf("%d",&v[j]);}

    bubble_sort(v,tam);

    for (int n = 0; n<tam;n++){
        printf("%d\n",v[n]);
    }



    return 0;
}
