#include <stdio.h>

    int main() {
        
        int bispo = 1, rainha = 1;

// TORRE
    printf("\nMovimentação da TORRE:\n");

    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

// BISPO
    printf("\nMovimentação do BISPO:\n");

    do 
    {
        if (bispo % 2 == 0)
        {
            printf("Cima\n");
        } else if (bispo % 2 != 0)
        {
            printf("Direita\n");
        }
        bispo++;
    } while (bispo <= 10);

// RAINHA
    printf("\nMovimentação da RAINHA:\n");

    while (rainha <= 8)
    {
        printf("Esquerda\n");
        rainha++;
    }
    

        return 0;
}
