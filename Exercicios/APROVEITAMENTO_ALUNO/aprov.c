#include<stdio.h>

int main(){
float p1, p2, media;
char nome[40];

printf("Digite o nome do aluno: ");
fgets(nome,40,stdin);
printf("Nota P1: ");
scanf("%f",&p1);
printf("Nota P2: ");
scanf("%f",&p2);
media=(p1+p2)/2;

   if(media>=9)
    {
        printf("NOME: %sMedia = %.2f. Aproveitamento A.\n",nome,media);
    }
    else if(media >= 8 && media <9)
        {
            printf("NOME: %sMedia = %.2f. Aproveitamento B.\n",nome,media);
        }
        else if(media < 8 && media>= 7)
            {   
                printf("NOME: %sMedia = %.2f. Aproveitamento C.\n",nome,media);
            }
            else if(media < 7 && media >= 6)
                {
                    printf("NOME: %sMedia = %.2f. Aproveitamento D.\n",nome,media);
                }
                else if(media < 6)
                    {
                        printf("NOME: %sMedia = %.2f. Aproveitamento E.\n",nome,media);
                    }
}