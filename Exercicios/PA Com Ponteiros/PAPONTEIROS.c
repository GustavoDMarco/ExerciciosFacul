#include<stdio.h>
#include<stdlib.h>

int main()
{

int pa[10], razao, i;
int *ptr;
 
 
    printf("Insira o termo inicial da PA: ");
    scanf("%d", &pa[0]);
    ptr = &pa[0];
 
    printf("Insira razao da PA: ");
    scanf("%d", &razao);

    printf("%d\n",*ptr);
 
    for(i=0; i<9;i++)
    {
        pa[i] =  *ptr + razao;
        *ptr=pa[i];
        printf("%d\n",pa[i]);
    }
    return 0;
}