#include<stdio.h>

int main()
{
float montante, capital, ValorParcela, TaxaDJuros;
int parcela;
int NParcela = 1;

printf("Digite o valor do capital inicial: ");
scanf("%f",&capital);
printf("Digite a quantidade de parcelas: ");
scanf("%d",&parcela);
printf("Digite a taxa de juros: ");
scanf("%f",&TaxaDJuros);

ValorParcela=capital/parcela;
montante=ValorParcela;

while(NParcela<parcela)
{
    ValorParcela=(ValorParcela*TaxaDJuros);
    montante=montante+ValorParcela;
    NParcela=NParcela+1;
}

printf("O montante final eh %.2f",montante);

}