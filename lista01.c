#include <stdio.h>

int main() 
{
    int matriz[3][3];
    int i, j, i2, j2;

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            i2 = i + 1;
            j2 = j + 1;
            printf("Elemento [%d][%d]: ", i2, j2);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz digitada foi:\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}