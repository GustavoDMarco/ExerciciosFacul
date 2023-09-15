#include<stdio.h>

int main()
{
char Aluno1[30]; char Aluno2[30]; char Aluno3[30]; char Aluno4[30];
char Escola[30];
float NA1, NA2, NA3, NA4;

printf("Nome da escola: ");
fgets(Escola,30,stdin);

printf("Nome Aluno 1: ");
getchar();
fgets(Aluno1,30,stdin);
printf("Nota do aluno 1: ");
scanf("%f",&NA1);

printf("Nome Aluno 2: ");
getchar();
fgets(Aluno2,30,stdin);
printf("Nota do aluno 2: ");
scanf("%f",&NA2);

printf("Nome Aluno 3: ");
getchar();
fgets(Aluno3,30,stdin);
printf("Nota do aluno 3: ");
scanf("%f",&NA3);

if(NA1 > NA2 && NA1> NA3)
{
    printf("Nome da escola: %s ",Escola);
    printf("O melhor aluno eh %s com a nota %2.f",Aluno1,NA1);
}else if(NA2 > NA1 && NA2> NA3)
    {   
        printf("Nome da escola: %s ",Escola);
        printf("O melhor aluno eh %s com a nota %2.f",Aluno2,NA2);
    }else if(NA3 > NA1 && NA3> NA2)
            {
                printf("Nome da escola: %s ",Escola);
                printf("O melhor aluno eh %s com a nota %2.f",Aluno3,NA3);
            }

}