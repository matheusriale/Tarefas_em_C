#include <stdio.h>
#include <stdlib.h>

int selection_sort(int *v,int tam){
    int min =  0; //min

    int aux = 0;

    for(int i = 0; i < tam; i++){
        min = v[i];
        for (int j = 0;j < tam; j++){
            if(v[j] > v[i]){
                min = v[j];
            aux = v[i];
        v[j] = aux;
        v[i] = min;

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

    selection_sort(v,tam);


    for (int i = 0;i<tam;i++){

        printf("%d\n",v[i]);
    }
}
