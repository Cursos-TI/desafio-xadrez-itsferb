#include <stdio.h>

    /*********** Recursividade ***********/

    /*
    //Recursividade 1-Torre
void movetorre(int casas) {
    // Se não possui mais casas para mover, implementado o return 
    if (casas <= 0) {
        return;
    }

    printf("A Torre andou 1 casa para a direita.\n");

    // Chamada recursiva
    movetorre(casas-1); 

    //Recursividade 2-Bispo
void movebispo(int casas) {
    // Se não possui mais casas para mover, implementado o return 
    if (casas <= 0) {
        return;
    }

    printf("O Bispo andou 1 casa para a diagonal.\n");

    // Chamada recursiva
    movebispo(casas-1); 

    //Recursividade 3-Rainha
void moverainha(int casas) {
    // Se não possui mais casas para mover, implementado o return 
    if (casas <= 0) {
        return;
    }

    printf("A rainha andou 1 casa para a esquerda.\n");

    // Chamada recursiva
    moverainha(casas-1); 
*/

int main() {

    /*********** Variáveis ***********/
    // Declaração de variáveis de peças e casas
    int peca; 
    int casas;
    int casas_direita = 0;
    int casas_cima = 0;
    int casas_esquerda = 0;
    int casas_baixo = 0;    

    /*********** Escolha da Peça ***********/
    //Apresenta para o usuário a opção para selecionar qual peça jogar
    do {
        printf("PEÇAS DE XADREZ:\n");
        printf("1-Torre\n");
        printf("2-Bispo\n");
        printf("3-Rainha\n");
        printf("4-Cavalo\n");
        printf("Informe a peça a ser movimentada: ");
        scanf("%d", &peca);
    } while (peca < 1 || peca > 4);

    /*********** Movimentação da Torre ***********/
    // Move-se em linha reta horizontalmente ou verticalmente. Deve movimentar-se cinco casas para a direita.
    //1-Torre

    if (peca == 1) {
        printf("Peça escolhida: 1-Torre\n");

        // Movimento com Do-While
        do {
            casas = 5;
        } while (casas < 1 || casas > 5);

        int i = 0;
            do {
                printf("Casa %d: Direita\n", i + 1);
                i++;
            } while (i < casas);

        casas_direita += casas;
        printf("A Torre andou %d casas para a direita.\n", casas);
    
    }

    /*********** Movimentação do Bispo ***********/
    // Move-se na diagonal. Deve movimentar-se cinco casas na diagonal para cima e à direita.
    //2-Bispo

    else if (peca == 2) {
        printf("Peça escolhida: 2-Bispo\n");

        // Movimento com Do-While
        do {
            casas = 5;
        } while (casas < 1 || casas > 5);

        int i = 0;
            do {
                printf("Casa %d: Diagonal\n", i + 1);
                i++;
            } while (i < casas);

        casas_direita += 2;
        casas_cima += 2;
        printf("O bispo andou %d casas para a diagonal.\n", casas);

        }

    /*********** Movimentação da Rainha ***********/
    // Move-se em todas as direções. Deve movimentar-se oito casas para a esquerda.
    //3-Rainha

    else if (peca == 3) { 
            printf("\nPeça escolhida: 3-Rainha\n");

        // Movimento com Do-While
        do {
            casas = 8;
        } while (casas < 1 || casas > 8);
            
        int i = 0;
            do {
                printf("Casa %d: Esquerda\n", i + 1);
                i++;
            } while (i < casas);

        casas_esquerda += 8;
        printf("A Rainha andou %d casas para a esquerda.\n\n", casas);

    }

    /*********** Movimentação do Cavalo ***********/
    // Move-se em L. Deve movimentar-se duas casas para baixo e uma casa para a esquerda.
    //4-Cavalo

    else if (peca == 4) { 
        for (int casas_cavalo = 1; casas_cavalo <= 3; casas_cavalo++) {  
            if (casas_cavalo <= 2) {                                             
            printf("Casa %d: Baixo\n", casas_cavalo);
            continue;
        }
            if (casas_cavalo == 3) {
             printf("Casa %d: Esquerda\n", casas_cavalo);
            break; // Interrompe o loop, pois o movimento terminou.
        }
    }
    
    casas_esquerda += 1;
    casas_baixo += 2;    

    }

    else { printf("Jogadas Finalizadas!"); }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
