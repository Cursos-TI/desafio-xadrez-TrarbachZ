#include <stdio.h>

    int main() {
        
        int bispo = 1, rainha = 1, cavalo = 0;

// TORRE -----------------------------------------
    printf("\nMovimentação da TORRE:\n");

    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

// BISPO -----------------------------------------
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

// RAINHA -----------------------------------------
    printf("\nMovimentação da RAINHA:\n");

    while (rainha <= 8)
    {
        printf("Esquerda\n");
        rainha++;
    }
    
// CAVALO -----------------------------------------
    printf("\nMovimentação do CAVALO:\n");

    do
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");

    } while (cavalo--);
    
//  -----------------------------------------

        return 0;
}
