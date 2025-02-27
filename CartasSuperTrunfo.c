#include <stdio.h>


int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Inclusão de dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 
    // O espaço antes de %c consome espaços em branco e quebras de linha

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); 
    // %[^\n] Lê a linha e espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    //Inclusão de dados da Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("--------------------------------\n");
    printf("--Estado: %c\n", estado1);
    printf("--                            --\n");
    printf("--Código: %s\n", codigo1);
    printf("--                            --\n");
    printf("--Nome da Cidade: %s\n", nomeCidade1);
    printf("--                            --\n");
    printf("--População: %d\n", populacao1);
    printf("--                            --\n");
    printf("--Área: %.f km²\n", area1);
    printf("--                            --\n");
    printf("--PIB: R$ %.f bilhões\n", pib1);
    printf("--                            --\n");
    printf("--Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("--------------------------------\n");

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("--------------------------------\n");
    printf("Estado: %c\n", estado2);
    printf("--                            --\n");
    printf("Código: %s\n", codigo2);
    printf("--                            --\n");
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("--                            --\n");
    printf("População: %d\n", populacao2);
    printf("--                            --\n");
    printf("Área: %.f km²\n", area2);
    printf("--                            --\n");
    printf("PIB: R$ %.f bilhões\n", pib2);
    printf("--                            --\n");
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("--------------------------------\n");

    return 0;
}
