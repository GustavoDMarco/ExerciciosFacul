#include<stdio.h>

int main(){
char time1[30]; 
char timeV[30];
int gol1, gol2, diferenca;

printf("Time da Casa: ");
fgets(time1,30,stdin);
printf("Quantos gols o time da casa fez? ");
scanf("%d",&gol1);

printf("Time visitante: ");
getchar();
fgets(timeV,30,stdin);
printf("Quantos gols o time visitante fez? ");
scanf("%d",&gol2);

printf("%s %d X ",time1,gol1);
printf("%d %s",gol2,timeV);

diferenca = gol1 - gol2;

if(diferenca >=0 && diferenca<=3 || diferenca <=0 && diferenca >= -3)
{
    printf("Partida normal");
} else if (diferenca > 4 || diferenca < -4)
    {
        printf("Partida teve uma goleada");
    }








}