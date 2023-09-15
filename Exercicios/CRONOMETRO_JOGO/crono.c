#include<stdio.h>
#include<stdlib.h>

int main(){

int i, s, cont, reiniciar;

do
{
        do
        {
            for(i=0; i==45 ; i++)
            {
                for(s=0; s<=60; s++)
                {
                    printf("%d:%d\n",i,s);
        
                }
            }

        } while(i==45);

        printf("FIM DO PRIMEIRO TEMPO!\n");
        printf("APERTE 1 PARA CONTINUAR OU 2 PARA ENCERRAR\n");
        scanf("%d",&cont);

        if(cont == 2)
        {
            printf("FIM DE PARTIDA!\n");
            break;
        }

        if(cont == 1);
        {
            do
            {
                for(i=45; i<=89 ; i++)
                {
                    for(s=0; s<=60; s++)
                    {
                        printf("%d:%d\n",i,s);
        
                    }
                }

            } while(i<=89);
    }

    printf("FIM DO JOGO\n");
    printf("APERTE 1 PARA REINICIAR OU OUTRA TECLA PARA ENCERRAR O PROGRAMA\n");
    scanf("%d",&reiniciar);

} while(reiniciar == 1);

printf("FIM DO PROGRAMA!");

    return (0);
}
