#include<stdio.h>

int contador=1;
int contador2=10;
int auxiliar;

int main()
{
for( ; ; )
{ 
    do
    {
        printf("\nMENU\n");
        printf("[1] De 1 a 10\n");
        printf("[2] De 10 a 1\n");
        printf("[3] Para sair\n");
        scanf("%d",&auxiliar);
    
        if(auxiliar==1)
        {
            while(contador<=10)
            {
                printf("%d. ",contador);
                contador++;
                if(contador>10)
                {
                    contador=1;
                    break;
                }
            }
        }else if(auxiliar==2)
            {
                while(contador2>=1)
                {  
                    printf("%d. ",contador2);
                    contador2--;
                    if(contador2<1)
                    {
                        contador2=10;
                        break;
                    }
                }
            } else
            {
                printf("programa encerrado!");
                break;
            }
    }while(auxiliar!=3);

}

}