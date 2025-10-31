#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {

    /*********** Variáveis ***********/
    // Declaração de variáveis de peças e casas
    int peca; 
    int casas;

    /*********** Escolha da Peça ***********/
    //Apresenta para o usuário a opção para selecionar qual peça jogar
    do {
        printf("PEÇAS DE XADREZ:\n");
        printf("1-Torre\n");
        printf("2-Bispo\n");
        printf("3-Rainha\n");
        printf("Informe a peça a ser movimentada: ");
        scanf("%d", &peca);
    } while (peca < 1 || peca > 3);

    /*********** Movimentação da Torre ***********/
    // Move-se em linha reta horizontalmente ou verticalmente. Deve movimentar-se cinco casas para a direita.
    //1-Torre

    //Apresenta para o usuário a opção para selecionar quantas casas jogar
    if (peca == 1) {
            printf("Peça escolhida: 1-Torre\n");
            do {
                printf("Número de casas a serem movimentadas para a direita (até 5): ");
                scanf("%d", &casas);
            } while (casas < 1 || casas > 5);
            printf("A Torre andou %d casas para a direita.\n", casas);

    // Movimento com Do - While
        int i = 0;
            do {
                printf("Casa %d: Direita\n", i + 1);
                i++;
        } while (i < casas);
    }


    /*********** Movimentação do Bispo ***********/
    // Move-se na diagonal. Deve movimentar-se cinco casas na diagonal para cima e à direita.
    //2-Bispo

    //Apresenta para o usuário a opção para selecionar quantas casas jogar

    else if (peca == 2) {
            printf("\nPeça escolhida: 2-Bispo\n");
            do {
                printf("Número de casas a serem movimentadas para cima e à direita (até 5): ");
                scanf("%d", &casas);
            } while (casas < 1 || casas > 5);
            printf("O Bispo andou %d casas na diagonal.\n\n", casas);

    // Movimento com WHILE
        int i = 0;
        while (i < casas) {
            printf("Casa %d: Diagonal\n", i + 1);
            i++;
        }
    }

    /*********** Movimentação da Rainha ***********/
    // Move-se em todas as direções. Deve movimentar-se oito casas para a esquerda.
    //3-Rainha

    //Apresenta para o usuário a opção para selecionar quantas casas jogar

    else {
            printf("\nPeça escolhida: 3-Rainha\n");
            do {
            printf("Número de casas a serem movimentadas para a esquerda (até 8): ");
            scanf("%d", &casas);
            } while (casas < 1 || casas > 8);
            printf("A Rainha andou %d casas para a esquerda.\n\n", casas);

    // Movimento com FOR
        for (int i = 1; i <= casas; i++) {
            printf("Casa %d: Esquerda\n", i);
        }
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
