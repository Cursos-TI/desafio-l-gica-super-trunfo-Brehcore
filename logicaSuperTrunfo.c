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

    // Cálculos da densidade populacional e PIB
    float dens1 = pop1 / area1;
    float ppc1 = (pib1 * 1e9) / pop1;

    float dens2 = pop2 / area2;
    float ppc2 = (pib2 * 1e9) / pop2;

    // Exibição dos Dados
    printf("\nCARTA 1\n");
    printf("Cidade: %s (%s)\n", nome1, estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per capita: R$ %.2f\n", ppc1);

    printf("\nCARTA 2\n");
    printf("Cidade: %s (%s)\n", nome2, estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per capita: R$ %.2f\n", ppc2);

    // Comparação de Cartas (com base em densidade populacional, o menor valor vence)
    printf("\nRESULTADO DA COMPARAÇÃO\n");
    printf("Comparando pela Densidade Populacional (menor vence):\n");

    if (dens1 < dens2) {
        printf("A cidade vencedora é: %s (%s)\n", nome1, estado1);
    } else if (dens2 < dens1) {
        printf("A cidade vencedora é: %s (%s)\n", nome2, estado2);
    } else {
        printf("Empate na densidade populacional!\n");
    }

    return 0;
}
