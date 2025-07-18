#include <stdio.h>  // Biblioteca padrão para entrada/saída (printf, scanf, etc.)

int main() {
    
    // 1. MOVIMENTO DA TORRE (5 casas para a DIREITA)
    
    // A Torre se move em linha reta  5 movimentos para a DIREITA.
    

    printf("Movimento da Torre (5 casas para a direita):\n");
    
    // FOR: Ideal quando sabemos quantas vezes o loop deve repetir.
    // Inicia em i=1, repete enquanto i<=5, incrementando i a cada iteração.
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");  // Imprime a direção do movimento.
    }

    
    // 2. MOVIMENTO DO BISPO (5 casas na DIAGONAL)
    
    
    

    printf("Movimento do Bispo (5 casas na diagonal Cima-Direita):\n");
    
    int casa_bispo = 1;  // Contador para controlar o número de movimentos.

    // WHILE: Repete enquanto a condição (casa_bispo <= 5) for verdadeira.
    while (casa_bispo <= 5) {
        printf("Cima, Direita\n");  // Imprime as duas direções do movimento.
        casa_bispo++;  // Incrementa o contador.
    }

   
    // 3. MOVIMENTO DA RAINHA (8 casas para a ESQUERDA)
    // A Rainha pode se mover em qualquer direção (horizontal, vertical ou diagonal).
  

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    
    int casa_rainha = 1;  // Contador para controlar o número de movimentos.

    // DO-WHILE: Executa o bloco pelo menos uma vez antes de verificar a condição.
    do {
        printf("Esquerda\n");  // Imprime a direção do movimento.
        casa_rainha++;  // Incrementa o contador.
    } while (casa_rainha <= 8);  // Condição de parada.

    return 0;  // Indica que o programa terminou com sucesso.
}
