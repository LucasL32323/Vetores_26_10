#include <stdio.h>
int main()
{
    int matriz[4][4];
    int i,j,maior;

    for (i=0;i<4;i++)
    {
        for(j =0;j<4;j++)
        {
            printf("Digite o valor[%d][%d]:" ,i,j);
            scanf("%d" ,&matriz[i][j]);

            if(i == 0 && j==0)
            {
                maior = matriz[i][j];
            }

            else if(matriz[i][j] >maior)
            {
                maior = matriz[i][j];
            }


            }
        }



                printf("\n");

printf("\nMaior número digitado:%d\n" ,maior);
    }




