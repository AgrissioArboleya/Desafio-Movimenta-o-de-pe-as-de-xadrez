#include <stdio.h>

//Resursividades Torre, Bispo já com a estrurura aninhada e Rainha
// Torre -> Direita
void moverTorre(int posicao, int limite) {
    if (posicao > limite) return; // Condição de parada
    printf("Torre -> Direita Casa %d\n", posicao);
    moverTorre(posicao + 1, limite);
}

// Bispo -> Diagonal (Recursão + Loops Aninhados)
void moverBispoRecursivo(int posVertical, int limite) {
    if (posVertical > limite) return;

    // Loop interno controla o movimento horizontal (diagonal = vertical + horizontal juntos)
    for (int posHorizontal = posVertical; posHorizontal <= posVertical; posHorizontal++) {
        printf("Bispo -> Cima, Direita Casa (%d,%d)\n", posVertical, posHorizontal);
    }

    moverBispoRecursivo(posVertical + 1, limite);
}

// Rainha -> Esquerda
void moverRainha(int posicao, int limite) {
    if (posicao > limite) return;

    if (posicao == 1) // Utilizado if e else apenas para ajustar a concordância verbal do print. // e treino
        printf("Rainha -> %d Casa para Esquerda\n", posicao);
    else
        printf("Rainha -> %d Casas para Esquerda\n", posicao);

    moverRainha(posicao + 1, limite);
}

// main para ativar a recursividade
int main() {

    int limiteTorre = 5; // Irá imprimir 5 vezes Torre -> Direita Casa 1, 2 ...ATE 5
    int limiteBispo = 5; // Irá imprimir 5 vezes Bispo -> Cima, Direita Casa 1, 2 ...ATE 5 + a recursividade
    int limiteRainha = 8;// Trá movimentar a rainha 8 casas para esquerda
    int movimentosCavalo = 1; // Quantos movimentos em "L" o cavalo fará

    printf ("\n### Desafio Movimentação peças de Xadrez### \n\n");

    printf("\nMovimentando Torre %d casas a Direita.\n\n", limiteTorre); // Print da direção do movimento da Torre.
    moverTorre(1, limiteTorre);

    printf("\nMovimentando Bispo %d casas para Diagonal Direita.\n\n", limiteBispo); // Print da direção do movimento do Bispo.
    moverBispoRecursivo(1, limiteBispo);

    printf("\nMovimentando Rainha %d casas para Esquerda.\n\n", limiteRainha); // Print da direção do movimento da Rainha.
    moverRainha(1, limiteRainha);

    printf("\nMovimentando Cavalo em L (2 para cima e 1 para direita)\n\n"); // Print da direção do movimento do Cavalo.

    //Código da movimentação do cavalo utilizando estruturas aninhadas, continue; e break;.
    for (int Direita = 0; Direita < movimentosCavalo; Direita++) { // loop externo (direita)
        
        int Cima = 1;
        while (Cima <= 2) { // loop interno (cima)
            if (Cima == 1) // Utilizado if e else apenas para ajustar a concordância verbal do print. // e treino
                printf("Cavalo -> %d Casa para Cima\n", Cima);
            else
                printf("Cavalo -> %d Casas para Cima\n", Cima);
            Cima++; // finalizar while
        }

        // controle do movimento para direita com continue e break
        for (int passo = 0; passo < 2; passo++) {
            if (passo == 0) continue; // pula o zero
            printf("Cavalo -> %d Casa para Direita\n", passo);
            break; // Movimenta só 1 x para direita
        }
    }

    return 0;
}
