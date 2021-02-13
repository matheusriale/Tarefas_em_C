#include <stdlib.h>
#include <stdio.h>
#include "cadeia.h" // onde estão os protótipos da função;



int str_tamanho (char *s){// "\0" final do vetor (não contabilizar)
    int tamanho = 0;
    for (int i = 0; (s[i] != '\0') && (s[i]!='\n') ;i++){
        tamanho = tamanho + 1;
    }
    return tamanho;
}

void str_concatena(char*s,char*d){
    int j = 0; //LEMBRAR DO MEMSET ANTES DE d--> memset(d, 0, sizeof(d));
    int tam_s = str_tamanho(s);
    int tam_d = str_tamanho(d);

    for(j = 0; j < tam_s;j++){

        d[tam_d + j] = s[j];
    }
}

void str_copia (char *s, char *d){
    //Copia, caractere a caractere, o conteúdo da
//cadeia de caracteres s para a cadeia de
//caracteres d.
    int tam_s = str_tamanho(s);
    int tam_d = str_tamanho(d);
    int cont = 0;
    int i = 0;

    for (int i = 0; i < tam_s ; i++){
        d[i] = s[i];
        cont = cont + 1;
    }
    while (d[cont]!= '\0'){
        d[cont] = NULL;

        cont = cont + 1;
    }
}

void numextenso(char*num,char*numeroextenso)
{

    char *unidades[10] = {"","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    char *particular[10] = {"","onze","doze","treze","quatorze","quinze","dezesseis","dezessete","dezoito","dezenove"};
    char *dezenas[10] = {"","dez","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
    char *centenas[10] = {"","cento","duzentos","trezentos","quatrocentos","quinhentos","seissentos","setessentos","oitocentos","novecentos"};
    //particular para numeros entre 10 e 20.Ex: onze,doze...

    int pos_centenas,pos_dezenas,pos_unidades,pos_particular;
    pos_particular = 0;

    int tamanho = str_tamanho(num);



    if (tamanho == 1){
        pos_unidades = num[0] - '0';
        str_concatena(unidades[pos_unidades],numeroextenso);

    }
    else if (tamanho == 2){
        pos_dezenas = num[0] - '0';
        pos_unidades = num[1] - '0';
        if((pos_dezenas == 1) && (pos_unidades != 0) ){ //caso esteja entr 11 e 19
            pos_particular = pos_unidades;
            str_concatena(particular[pos_particular],numeroextenso);
        }
        else if((pos_dezenas == 0)&&(pos_unidades != 0)){
            str_concatena(unidades[pos_unidades],numeroextenso);
        }
        else if((pos_dezenas != 0) && (pos_unidades==0)){
            str_concatena(dezenas[pos_dezenas],numeroextenso);
        }
        else if ((pos_dezenas != 0) && (pos_unidades != 0)){
            str_concatena(dezenas[pos_dezenas],numeroextenso);//funçao dentro de outra
            str_concatena(" e ",numeroextenso);
            str_concatena (unidades[pos_unidades],numeroextenso);
                }
        }
    else if (tamanho == 3){
        pos_centenas = num[0] - '0';
        pos_dezenas = num [1] - '0';
        pos_unidades = num [2] - '0';

        if((pos_centenas == 1) && (pos_dezenas == 0) && (pos_unidades == 0)){//caso cem
            str_concatena("cem",numeroextenso);
            }
        else if((pos_centenas == 0)&&(pos_dezenas == 0)&&(pos_unidades != 0)){//001
            str_concatena(unidades[pos_unidades],numeroextenso);
        }
        else if((pos_centenas == 0)&&(pos_dezenas != 0) && (pos_unidades == 0)){//010
            str_concatena(dezenas[pos_dezenas],numeroextenso);
        }
        else if( ( pos_centenas == 0 ) && ( pos_dezenas == 1) && (pos_unidades != 0)){//011
            str_concatena(particular[pos_unidades],numeroextenso);}

        else if((pos_centenas == 0)&&(pos_dezenas != 1)&&(pos_unidades != 0)){//023,032...
            str_concatena(dezenas[pos_dezenas],numeroextenso);
            str_concatena(" e ",numeroextenso);
            str_concatena(unidades[pos_unidades],numeroextenso);
        }

        else if (((pos_dezenas == 0) && (pos_unidades != 0 )) || ((pos_dezenas != 0)&&(pos_unidades == 0))){//ou exclusivo
            str_concatena(centenas[pos_centenas],numeroextenso);
            str_concatena(" e ",numeroextenso);
            str_concatena (dezenas[pos_dezenas],numeroextenso);
            str_concatena (unidades[pos_unidades],numeroextenso);
            }
        else if ((pos_centenas != 1)&&(pos_dezenas ==0)&&(pos_unidades == 0)){
            str_concatena (centenas[pos_centenas],numeroextenso);}
        else {
            str_concatena(centenas[pos_centenas],numeroextenso);
            str_concatena(" e ",numeroextenso);
            str_concatena(dezenas[pos_dezenas],numeroextenso);
            str_concatena(" e ",numeroextenso);
            str_concatena(unidades[pos_unidades],numeroextenso);
            }
        }
    }