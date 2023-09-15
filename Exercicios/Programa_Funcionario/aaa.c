#include <stdio.h>

int main()
{
int resposta, meses;
float salario, Aumento, Novosalario, ferias, DecimoTerceiro;
do{

    printf("\n\n1. Novo Salario\n");
    printf("2. Ferias\n");
    printf("3. Decimo Terceiro\n");
    printf("4. Sair\n");
    printf("\nQual opcao deseja escolher? ");
    scanf("%d",&resposta);

    if (resposta >= 5)
    {
        printf("\nEscolha uma opcao valida!");
    }else if (resposta==1)      /*NOVO SALARIO*/
    {   
        printf("\nDigite o seu salario atual: ");
        scanf("%f",&salario);

        if (salario < 210)
        {
            Aumento=(salario*15)/100;
            Novosalario= salario+Aumento;
            printf("\nVoce recebeu um aumento de %.2f reais",Aumento);
            printf("\nSeu novo salario eh: %.2f",Novosalario);

        }else if (salario >= 210 && salario <= 600)
        {
            Aumento=(salario*10)/100;
            Novosalario= salario+Aumento;
            printf("\nVoce recebeu um aumento de %.2f reais",Aumento);
            printf("\nSeu novo salario eh: %.2f",Novosalario);
        }else
        {
            Aumento=(salario*5)/100;
            Novosalario= salario+Aumento;
            printf("\nVoce recebeu um aumento de %.2f reais",Aumento);
            printf("\nSeu novo salario eh: %.2f",Novosalario);
        }        
    } else if (resposta ==2)    /*FERIAS*/
    {
        printf("\nDigite o seu salario atual: ");
        scanf("%f",&salario);
        ferias=salario+(salario/3);
        printf("O valor de suas ferias eh: %.2f",ferias);        
    } else if (resposta==3)
    {
        printf("Numero de meses trabalhados na empresa no ano? ");
        scanf("%d",&meses);
        printf("Digite seu salario atual: ");
        scanf("%f",&salario);

        if (meses>12)
        {
            printf("\nDigite os meses corretamente");
        }else
        {
            DecimoTerceiro= (salario/12)*meses;
            printf("Seu decimo terceiro sera: %.2f",DecimoTerceiro);
        }
    }
}while(resposta != 4);

printf("\n\nVoce saiu do programa!");
}