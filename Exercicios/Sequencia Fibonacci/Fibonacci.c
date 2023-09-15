#include<stdio.h>

int soma(int X, int Y, int Z)
{
    int resultado;
    X=Y;
    Y=Z;

    resultado= Z+Y;
    return resultado;
}

int main()
{
int C;
int A=0;
int B=1;
int i;

    printf("%d. ",A);
    printf("%d. ",B);

    C=A+B;
    printf("%d. ",C);

    for(i=0; i <11; i++)
    {
        C=soma(A,B,C);

       printf("%d. ",C);
    }


}