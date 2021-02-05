#include <stdio.h>
#include <stdlib.h>

void ponto_simetrico(float *ar,float *br,float *cr,float *Xa,float *Ya,float *Xb, float *Yb){
    float ym,xm;

    float mr = (- *ar/ *br);

    float ms = (-1/mr);// = br/ar

    //axm + bym + c = l
    //ym-Ya = ms(xm-Xa) = l
    //ym = ms*(xm - Xa)+Ya
    //ym = (-ar*xm -cr)/b
    //(-ar*xm -cr)/br = ms*(xm - Xa)+Ya

    xm = ((ms* *Xa - *Ya - (*cr/ *br))/(ms + (*ar/ *br)) );
    *Xb = 2*xm - *Xa;

    ym = ms*(xm - *Xa)+*Ya;

    *Yb = 2*ym - *Ya;


}

int main()
{
    float ar,br,cr,as,bs,cs,Xa,Ya,mr,ms;// r reta padrão, s reta a ser descoberta;
    float Xb = 34;
    float Yb = 0;
    float *par,*pbr,*pcr,*pXa,*pYa; //Ponteiros
    float *pXb,*pYb;

    printf("Considerando a equacao da reta: Ax + By + c\nDigite os coeficientes a,b,c:");
    scanf("%f %f %f",&ar,&br,&cr);

    printf("Digite as coordenadas do ponto A(Xa,Ya):");
    scanf("%f %f",&Xa,&Ya);

    par = &ar;
    pbr = &br;
    pcr = &cr;
    pXa = &Xa;
    pYa = &Ya;
    pXb = &Xb;
    pYb = &Yb;

    ponto_simetrico(par, pbr ,pcr , pXa, pYa, pXb, pYb);


    printf("Ponto B: (%.0f, %.0f)",Xb,Yb);







}
