#include <stdio.h>

void movTorre(int n)    // bloco da movimentação torre
{
    if (n > 0)
    {
        printf("Direita\n");   // imprime "direita" n vezes ate n = 0
        movTorre(n - 1);
    }
}

void movBispo(int n)   // bloco da movimentação bispo
{
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Cima\n");       // imprime "cima" e "direita" alternadamente, n vezes até n = 0. nesse caso 5 vezes
            printf("Direita\n");     // eu tentei muuuito, mas nao consegui sair do loop aninhando "for".
       
        }
       movBispo(n - 1);
    }
}

void movRainha(int n)  // bloco da movimentação rainha
{
    if (n > 0)
    {
        printf("Esquerda\n"); // imprime "esquerda" até que n se torne 0, nesse caso 8 vezes
        movRainha(n - 1);
    } 
}

    int main() {
        
       int cavalo = 1; // unica variavel declarada, unica peça sem o void


    printf("\nMovimentação da TORRE:\n");

    movTorre(5); // chama o void

    printf("\nMovimentação do BISPO:\n");

    movBispo(5); // chama o void

    printf("\nMovimentação da RAINHA:\n");

    movRainha(8); // chama o void
    
// CAVALO -----------------------------------------
    printf("\nMovimentação do CAVALO:\n");

    do
    {
        printf("Direita\n");
        for (int i = 0; i < 2; i++)  // vai imprimir o "direita" 2 vezes (ate i = 2)
        {
            printf("Cima\n"); //vai imprimir "cima" uma vez só, equanto cavalo vai de 1 (declarado na variavel) até 0 (declarado na condição do while)
        }
    } while (--cavalo);
       

    return 0;
}

