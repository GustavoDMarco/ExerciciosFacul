#include<stdio.h>

int main()
{
    int inicio, fim, contador;
printf("Digite um numero para comecar a contar: ");
scanf("%d",&inicio);
printf("Digite um numero para encerrar: ");
scanf("%d",&fim);

if(inicio <= fim)
{   
    do
    {
        printf("%d. ", inicio);
        inicio++;
    }while(inicio <= fim);

}else 
    do
    {
        printf("%d. ",inicio);
        inicio--;
    }while(inicio >= fim);
}



