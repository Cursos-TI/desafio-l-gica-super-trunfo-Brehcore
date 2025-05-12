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
    scanf(" %[^\n]", nome1);
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
    int opcao;
    printf("\nMenu de Comparação\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\nComparação entre: %s e %s\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, pop1);
            printf("%s: %d habitantes\n", nome2, pop2);

            if (pop1 > pop2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pop2 > pop1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bilhões\n", nome1, pib1);
            printf("%s: R$ %.2f bilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade demográfica (MENOR vence)\n");
            printf("%s: %.2f hab/km²\n", nome1, dens1);
            printf("%s: %.2f hab/km²\n", nome2, dens2);

            if (dens1 < dens2) {
                printf("Vencedor: %s\n", nome1);
            } else if (dens2 < dens1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}
