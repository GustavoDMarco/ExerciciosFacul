#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    char Times[3][10];
    int cont;
    int j;
    int encerrar;

    printf("Digite 3 times: ");

    for (i = 0; i <= 2; i++)
    {
        scanf("%s",&Times[i]);
    }


        for (i = 0; i <=2; i++)
        {
            printf("\n%s X ",Times[i]);     /*MOSTRA TIME DA CASA*/
            
            if (i!=2)
            {
                for (cont= i+1; cont <=2; cont++)       /*MOSTRA TIME VISITANTE PARA I=0 E I= 1*/
                {
                    printf("%s\n",Times[cont]);
                    break;
                }

            } else if
                {
                    for (cont= i-2; cont <1; cont++)        /*MOSTRA TIME VISITANTE PARA I=2*/
                    {
                        printf("%s\n",Times[cont]);
                        break;
                    }
                
                }

            printf("%s X ",Times[i]);           /*MOSTRA TIME DA CASA*/
           
           if (i==1)
           {
                for (cont= i-1; cont <=2; cont++)       /*MOSTRA TIME VISITANTE PARA I=1*/
                {
                    printf("%s\n",Times[cont]);
                    break;
                }
           }else if (i==2)                      
                {
                    for (cont= i-1; cont <2; cont++)        /*MOSTRA TIME VISITANTE PARA I=2*/
                    {
                        printf("%s\n",Times[cont]);
                    }
                }    
                    for (cont= i+2; cont <=2; cont++)   /*MOSTRA TIME VISITANTE PARA I=0*/
                    {
                        printf("%s\n",Times[cont]);
                        break;
                    }

        }
        
}