#include <stdio.h>
int main()
{
    int matriz[4][4];
    int i, j;
    int pares = 0, impares = 0;



    for (i =0; i< 4 ;i++)
    {
        for (j = 0;j <4;j++)
        {
            printf("Digite o valor [%d][%d]:" , i,j);
            scanf("%d" ,&matriz[i][j]);

            if (matriz[i][j] % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }

        }
    }

    printf("\nMatriz digitada:\n");
    for(i = 0; i<4 ;
     i++)
    {
        for(j =0; j <4;j++)
        {
            printf("%4d", matriz[i][j]);
        }


    }

    printf("\nQuantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);








    return 0;

}
