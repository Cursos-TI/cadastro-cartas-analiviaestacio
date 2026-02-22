#include <stdio.h>

// Desafio Super Trunfo - Comparação de Cartas

int main() {

    // ==============================
    // Declaração das variáveis
    // ==============================

    // Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // ==============================
    // Entrada de dados - Carta 1
    // ==============================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ==============================
    // Entrada de dados - Carta 2
    // ==============================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==============================
    // Cálculos
    // ==============================

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ==============================
    // Comparação (ATRIBUTO ESCOLHIDO)
    // Aqui estamos comparando POPULAÇÃO
    // ==============================

    printf("\n====================================\n");
    printf("Comparacao de Cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    }
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    else {
        printf("\nResultado: Empate!\n");
    }

    // ==============================
    // Exibição dos cálculos extras
    // ==============================

    printf("\n--- Dados Calculados ---\n");
    printf("Densidade Carta 1: %.2f hab/km²\n", densidade1);
    printf("PIB per capita Carta 1: %.2f\n", pibPerCapita1);

    printf("Densidade Carta 2: %.2f hab/km²\n", densidade2);
    printf("PIB per capita Carta 2: %.2f\n", pibPerCapita2);

    return 0;
}
