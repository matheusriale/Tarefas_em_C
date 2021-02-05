#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int selection_sort(int v[],int N)
{
    int min =  0; //min
    int aux = 0;
    for(int i = 0; i < N; i++){
        min = v[i];
        for (int j = 0;j < N; j++){
            if(v[j] > v[i]){
                min = v[j];
            aux = v[i];
        v[j] = aux;
        v[i] = min;
            }
        }
    }
}

int bubble_sort(int v[],int N)
{
    int aux = 0;
    for(int j = 0 ; j<N;j++){

        for(int i = 0; i < N - j; i++){
            if(v[i]>v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

int insertion_sort(int v[],int N)
{
    int aux,j;
    for (int i = 0; i <= N-1; i++){
        aux = v[i];
        j = i-1;
        while ((j>=0) && (aux<v[j])){
            v[j+1] = v[j];
            j = j - 1; }
        v[j+1] = aux;
    }
}

int comb_sort(int v[],int N)
{   int aux = 0;
    int gap = N/1.3;
    for(int i = 0; gap > 0 ; i++){ // laços para mudar os gaps, fazer o teste com gaps diferentes
        for (int j = 0; j+gap <= N;j++){
            if (v[j] > v[j+gap]){

                aux = v[j];
                v[j] = v[j+gap];
                v[j+gap] = aux;
                }
            }
        gap = gap/1.3;
        }
    }


int main() // Para n = 7000 e k = 4200;
           // Temos que o comb sort se prova mais eficiente com um tempo de cerca de 4 segundos

{   time_t tempo_inicio, tempo_final;
    int N,k,j;
    double tempo_total_bubble = 0,tempo_total_insertion = 0,tempo_total_comb = 0,tempo_total_selection = 0;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d",&N);

    int v[N];
    printf("Digite o numero de vezes que iremos rodar os algoritmos de ordenacao:\n");
    scanf("%d",&k);

    /////SELECTION SORT/////

    int vetor2[N],vetor3[N],vetor4[N];

    for(int i = 0;i < k; i++){
        for(int j = 0; j < N; j++){
            v[j] = rand()%(100*N); //valores aleatorios
            vetor2[j] = v[j];
            vetor3[j] = v[j];
            vetor4[j] = v[j];}



        ////SELECTION SORT/////



        tempo_inicio = clock();
        selection_sort(v,N);
        tempo_final = clock();
        tempo_total_selection += (double)  (tempo_final - tempo_inicio)/ CLOCKS_PER_SEC ;

        ////BUBBLE SORT/////

        tempo_inicio = clock();
        bubble_sort(vetor2,N);
        tempo_final = clock();
        tempo_total_bubble += (double)(tempo_final - tempo_inicio)/ CLOCKS_PER_SEC  ;

        ////INSERTION SORT/////

        tempo_inicio = clock();
        insertion_sort(vetor3,N);
        tempo_final = clock();
        tempo_total_insertion += (double) (tempo_final - tempo_inicio)/ CLOCKS_PER_SEC  ;

        ////COMB SORT/////

        tempo_inicio = clock();
        comb_sort(vetor4,N);
        tempo_final = clock();
        tempo_total_comb += (double) (tempo_final - tempo_inicio)/ CLOCKS_PER_SEC ;


        }

    printf("Tempo de execucao do Selection sort: %lf segundos\n",tempo_total_selection);
    printf("Tempo de execucao do Bubble sort: %lf segundos\n",tempo_total_bubble);
    printf("Tempo de execucao do Insertion sort: %lf segundos\n",tempo_total_insertion);
    printf("Tempo de execucao do Comb sort: %lf segundos\n",tempo_total_comb);

    if ((tempo_total_selection < tempo_total_bubble)&&(tempo_total_selection<tempo_total_insertion)&&(tempo_total_selection<tempo_total_comb)){
        printf("Selection Sort foi o mais eficiente");
    }
    else if ((tempo_total_insertion<tempo_total_bubble)&&(tempo_total_insertion<tempo_total_selection)&&(tempo_total_insertion<tempo_total_comb)){
        printf("Insertion Sort foi o mais eficiente");
    }
    else if ((tempo_total_bubble<tempo_total_selection)&&(tempo_total_bubble<tempo_total_insertion)&&(tempo_total_bubble<tempo_total_comb)){
        printf("Bubble Sort foi o mais eficiente");
    }
    else if ((tempo_total_comb<tempo_total_bubble)&&(tempo_total_comb<tempo_total_selection)&&(tempo_total_comb<tempo_total_bubble)){
        printf("Comb Sort foi o mais eficiente");
    }



    return 0;
}
