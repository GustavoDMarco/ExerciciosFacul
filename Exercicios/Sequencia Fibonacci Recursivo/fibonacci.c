#include <stdio.h>

int soma(int num,int y,int x,int cont){
    int z=y+x;
    y=x;
    x=z;

    cont++;

    if (cont<=num)
    {
        printf("%d ",y);
        soma(num,y,x,cont);
    }

}

int main(void){
    int num;
    printf("Digite um numero para sequencia de fibonacci: ");
    scanf("%d",&num);
    soma(num,0,1,0);
}