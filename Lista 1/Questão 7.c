#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,cont;
    cont = 0;

    printf("Digite N:");
    scanf("%d",&n);

    for(int i = 2; i<=n ; i++){
        for (int j = 2; j < i; j++){
            if (i%j == 0){
                cont = cont + 1 ;
            }}
        if (cont == 0){
            printf("%d\n",i);
         }

         cont = 0;}

    return 0;
}
