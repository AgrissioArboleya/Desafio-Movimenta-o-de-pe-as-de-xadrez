# Desafio-Movimenta-o-de-pe-as-de-xadrez

Funcionalidades

1. Torre
Movimenta-se apenas na horizontal (direita).
Implementada com recursão.

Exemplo de saída:

Torre -> Direita Casa 1
Torre -> Direita Casa 2
...
Torre -> Direita Casa 5

2. Bispo
Movimenta-se na diagonal (cima + direita).
Implementado com recursão + loop aninhado para controlar a posição horizontal.

Exemplo de saída:

Bispo -> Cima, Direita Casa (1,1)
Bispo -> Cima, Direita Casa (2,2)
...
Bispo -> Cima, Direita Casa (5,5)

3. Rainha
Movimenta-se para a esquerda.
Implementado com recursão.
O print ajusta automaticamente a concordância verbal (Casa vs Casas).

Exemplo de saída:

Rainha -> 1 Casa para Esquerda
Rainha -> 2 Casas para Esquerda
...
Rainha -> 8 Casas para Esquerda

4. Cavalo
Movimenta-se em "L" (2 casas para cima e 1 casa para direita).
Implementado com loops aninhados e uso de continue e break para controlar o movimento.

Exemplo de saída:

Cavalo -> 1 Casa para Cima
Cavalo -> 2 Casas para Cima
Cavalo -> 1 Casa para Direita

Estrutura do Código
Funções de movimentação
moverTorre(int posicao, int limite) → Torre.
moverBispoRecursivo(int posVertical, int limite) → Bispo.
moverRainha(int posicao, int limite) → Rainha.
Movimento do Cavalo

Dentro da função main().
Utiliza for e while aninhados.
Controle de movimento com continue e break.

Função main()
Define os limites de movimento de cada peça.
Chama as funções recursivas e executa o movimento do cavalo.

Como Executar
Salve o código em um arquivo com extensão .c, 
por exemplo: xadrez.c.

Compile usando:
gcc xadrez.c -o xadrez

Execute:
./xadrez

Observações
A movimentação do Bispo é simplificada para diagonal positiva.
A movimentação do Cavalo mostra apenas 1 "L", mas pode ser ajustada alterando o valor de movimentosCavalo.
Este código é voltado para aprendizado de recursão e loops aninhados em C.