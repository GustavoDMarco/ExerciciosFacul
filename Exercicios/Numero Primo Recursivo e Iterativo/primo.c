#include <stdio.h>

void PrimoIterativa(int num){
    int resposta=0;
    for ( int i = 1; i <= num; i++)
    {
        int primo = num%i;

        if (primo==0)
        {
            resposta++;
        }
    }

    if (resposta==2)
    {
        printf("%d Eh primo\n",num);
    }else{
        printf("%d Nao eh primo\n",num);
    }
    
}


void PrimoRecursivo(int num, int cont, int primo){
    int resposta=num%cont;

    if (resposta==0)
    {
        primo++;
    }

    if (cont!=num){
        cont++;
        PrimoRecursivo(num,cont,primo);
    }else if(primo==2){
            printf("%d Eh primo\n",num);
    }else{
        printf("%d Nao eh primo\n",num);
    }
}


int main(void){
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    PrimoIterativa(num);
    PrimoRecursivo(num,1,0);

}