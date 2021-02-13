/*Faça um programa em linguagem C que receba, de um arquivo texto (usando os parâmetros
da função main – narg e argv) ou da entrada padrão (teclado), um número inteiro no
intervalo de 1 e 999 e, em seguida, mostre o extenso deste número.*/


#include <stdio.h>
#include <conio.h>
#include "cadeia.h"//*******************************//


int main( int argc, char *argv[] )
{   char numero[5]; //numero pra converter
    char extenso[1000][1024]; //guardar os n em extenso
    char *s,*d;//ponteiro_p_num , ponteiro_p_extenso
    int cont = 0;
    s = numero;
    
    memset(extenso, 0, sizeof(extenso));
    //caso n ponham nenhum txt pela linha de comando
    if (argc == 1){
        printf("Entre um numero no intervalo fechado de 1 a 999:\n");
        
        scanf("%s",&numero);
        
        d = extenso[cont];
        numextenso(s,d);
        cont = cont + 1;
    }                                                                                                         
    else{
        
        FILE *pont_arq;
        pont_arq = fopen(argv[1],"r");
        while(fgets(numero,10,pont_arq) != NULL){
            
            d = extenso[cont];
            numextenso(s,d);//lembrando q s é ponteiro para o numero;
            cont = cont + 1;
            
            
        }
        fclose(pont_arq);
    }
    
    for (int i = 0 ; i < cont ; i++){
        printf("%s\n",extenso[i]);
        } 
    return 0;
    }
    
    //