#include <stdio.h>
#include <stdlib.h>

int menu(int resposta)
{
    printf("\nQual operacao deseja realizar?\n ");
    printf("Digite 1 - Adicao\n ");
    printf("Digite 2 - Subtracao\n ");
    printf("Digite 3 - Divisao\n ");
    printf("Digite 4 - Multiplicacao\n ");
    printf("Digite 5 - Sair\n ");
    scanf("%d", &resposta);

    while (resposta > 5)
    {
        printf("Digite um valor valido: ");
        scanf("%d", &resposta);
    }

    if (resposta <= 5)
    {
        return resposta;
    }
}

void adicao()
{
    int tam;
    float soma = 0;

    printf("Quantos numeros serao somados?\n ");
    scanf("%d", &tam);
    float *v = malloc(tam * sizeof(float));

    printf("Digite os numeros: ");
    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &v[i]);
        soma = soma + v[i];
    }

    printf("\nSoma eh: %.2f\n", soma);
}

void subtracao()
{
    int tam;
    float sub;

    printf("Quantos numeros serao subtraidos?\n ");
    scanf("%d", &tam);
    float *v = malloc(tam * sizeof(float));

    printf("Digite os numeros: ");
    for (int i = 0; i < tam; i++)
    {
        scanf("%f", &v[i]);

        if (i == 0)
        {
            sub = v[0];
        }
    }

    for (int i = 1; i < tam; i++)
    {
        sub = sub - v[i];
    }

    printf("\nSubtracao eh: %.2f\n", sub);
}

void divisao()
{
    float dividendo, divisor, quociente;

    printf("Digite o dividendo: \n ");
    scanf("%f", &dividendo);
    printf("Digite o divisor:\n ");
    scanf("%f", &divisor);

    quociente = dividendo / divisor;

    printf("Resultado da divisao eh: %.2f", quociente);
}

void multiplicao()
{
    int tam, cont, i;
    float resultado;

    printf("Quantos numeros serao multiplicados?\n ");
    scanf("%d", &tam);
    float *v = malloc(tam * sizeof(float));

    printf("Digite os numeros: \n ");
    for (i = 0; i < tam; i++)
    {
        scanf("%f", &v[i]);
        if (i == 0)
        {
            resultado = v[i];
        }
    }

    for (i = 1; i < tam; i++)
    {
        resultado = resultado * v[i];
    }

    printf("Resultado da multiplicacao eh: %.2f", resultado);
}

int main(void)
{
    int resposta;

    do
    {
        resposta = menu(resposta);

        if (resposta == 1)
        {
            adicao();
        }
        else if (resposta == 2)
        {
            subtracao();
        }
        else if (resposta == 3)
        {
            divisao();
        }
        else if (resposta == 4)
        {
            multiplicao();
        }

    } while (resposta != 5 && resposta < 5);

    printf("\nEncerrando programa!");
}