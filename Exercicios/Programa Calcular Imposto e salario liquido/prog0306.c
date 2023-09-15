#include <stdio.h>

int main() 
{

    printf("Digite o salario bruto\n");

    float salarioBruto;
    scanf("%f", &salarioBruto);

    
    float imposto = salarioBruto * 5/100;
    float imposto2 = salarioBruto * 11/100;
    float imposto3 = salarioBruto * 35/100;
    float salarioLiquido = salarioBruto - imposto;
    float salarioLiquido2 = salarioBruto - imposto2;
    float salarioLiquido3 = salarioBruto - imposto3;

        if (salarioBruto <1000)

            printf("O valor pago de imposto eh %f resultando no salario liquido %f \n", imposto,salarioLiquido);

            else
                if (salarioBruto>=1000 && salarioBruto <5000)

                    printf("O Valor pago de imposto eh %f resultando no salario liquido %f\n", imposto2, salarioLiquido2);
                
                else 
                    printf("O valor pago de imposto eh %f resultando no salario liquido %f", imposto3, salarioLiquido3);
                
}
    
   