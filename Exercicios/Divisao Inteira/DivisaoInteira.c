#include<stdio.h>
#include<stdlib.h>

int main()
{
int primeiro, segundo, resto, quociente,subtracao;
int contador=0;

printf("Digite o primeiro numero: ");
scanf("%d",&primeiro);
printf("Digite o segundo numero: ");
scanf("%d",&segundo);

if(segundo>primeiro)
{
    printf("Entrada de dados invalida");

}else
{
    do{
        subtracao=primeiro-segundo;
        contador=contador+1;
        primeiro=subtracao;
    }while(subtracao>0);   

    quociente=contador-1;
    resto=subtracao+segundo;

    printf("\nquociente %d",quociente);
    printf("\nresto %d",resto);
}

}