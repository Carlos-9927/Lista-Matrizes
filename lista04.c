#include <stdio.h>

int main() 
{
    int matriz[4][4];
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) 
        {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Elementos da diagonal principal:\n");
    for (i = 0; i < 4; i++) 
    {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}