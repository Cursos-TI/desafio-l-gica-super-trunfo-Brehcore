#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Váriaveis para a carta 1
    char estado1[3], codigo1[10], nome1[50];
    int pop1, pontos1;
    float area1, pib1;

    // Váriaveis para a carta 2
    char estado2[3], codigo2[10], nome2[50];
    int pop2, pontos2;
    float area2, pib2;

    // Cadastro das Cartas:
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: "); 
    scanf("%s", estado1);
    printf("Código: "); 
    scanf("%s", codigo1);
    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nome1); // %[^\n] Permite que o nome informado contenha espaços
    printf("População: "); 
    scanf("%d", &pop1);
    printf("Área (km²): "); 
    scanf("%f", &area1);
    printf("PIB (em bilhões): "); 
    scanf("%f", &pib1);
    printf("Pontos turísticos: "); 
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: "); 
    scanf("%s", estado2);
    printf("Código: "); 
    scanf("%s", codigo2);
    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nome2);
    printf("População: "); 
    scanf("%d", &pop2);
    printf("Área (km²): "); 
    scanf("%f", &area2);
    printf("PIB (em bilhões): "); 
    scanf("%f", &pib2);
    printf("Pontos turísticos: "); 
    scanf("%d", &pontos2);

    // Cálculos da densidade demográfica
    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    //Menu interativo
    int opcao1, opcao2;
    printf("\n--Menu de Comparação de Atributos--\n");
    // Atributos 1
    printf("Escolha o primeiro atributo: \n");
    printf("[1 - População] [2 - Área] [3 - PIB] [4 - Pontos Turísticos] [5 - Densidade demográfica]\n");
    printf("Escolha o primeiro atribudo para comparar: \n");
    scanf("%d", &opcao1);

    // Atributos 2
    printf("Escolha o segundo atributo: \n");
    printf("[1 - População] [2 - Área] [3 - PIB] [4 - Pontos Turísticos] [5 - Densidade demográfica]\n");
    printf("Escolha o segundo atribudo para comparar: \n");
    scanf("%d", &opcao2);

    // Exibindo as cartas
    printf("\nComparação entre: %s e %s\n", nome1, nome2);

    // Comparação dos dois atributos selecionados
    printf("\nComparando os atributos: \n");

    switch (opcao1) {
        case 1:
            printf("Atributo 1: População\n");
            printf("%s: %d habitantes\n", nome1, pop1);
            printf("%s: %d habitantes\n", nome2, pop2);
            break;

        case 2:
            printf("Atributo 1: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            break;

        case 3:
            printf("Atributo 1: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nome1, pib1);
            printf("%s: R$ %.2f bilhões\n", nome2, pib2);
            break;

        case 4:
            printf("Atributo 1: Pontos turísticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            break;

        case 5:
            printf("Atributo 1: Densidade demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nome1, dens1);
            printf("%s: %.2f hab/km²\n", nome2, dens2);
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            return 1;
    }

        switch (opcao2) {
        case 1:
            printf("Atributo 2: População\n");
            printf("%s: %d habitantes\n", nome1, pop1);
            printf("%s: %d habitantes\n", nome2, pop2);
            break;

        case 2:
            printf("Atributo 2: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            break;

        case 3:
            printf("Atributo 2: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nome1, pib1);
            printf("%s: R$ %.2f bilhões\n", nome2, pib2);
            break;

        case 4:
            printf("Atributo 2: Pontos turísticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            break;

        case 5:
            printf("Atributo 2: Densidade demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nome1, dens1);
            printf("%s: %.2f hab/km²\n", nome2, dens2);
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            return 1;
    }

    // Decisão com operadores ternários para determinar quem venceu
    // Se ambos os atributos tem vitórias diferentes para cada cidades, o resultado será um empate
    printf("\nResultado da Comparação: \n");
    int vencedor1 = (opcao1 == 1 && pop1 > pop2) || (opcao1 == 2 && area1 > area2) || 
                    (opcao1 == 3 && pib1 > pib2) || (opcao1 == 4 && pontos1 > pontos2) || 
                    (opcao1 == 5 && dens1 < dens2) ? 1 : 0;

    int vencedor2 = (opcao2 == 1 && pop2 > pop1) || (opcao2 == 2 && area2 > area1) || 
                    (opcao2 == 3 && pib2 > pib1) || (opcao2 == 4 && pontos2 > pontos1) || 
                    (opcao2 == 5 && dens2 < dens1) ? 2 : 0;

    if (vencedor1 && vencedor2) {
        printf("Empatado! Ambos os atributos indicam vitórias diferentes!\n");
    } else if (vencedor1) {
        printf("Vencedor: %s\n", nome1);
    } else if (vencedor2) {
        printf("Vencedor: %s\n", nome2);
    } else {
        printf("Empate! Nenhuma cidade se destacou.\n");
    }

    return 0;
}
