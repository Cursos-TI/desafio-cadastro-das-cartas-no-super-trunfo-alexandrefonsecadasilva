#include <stdio.h>

typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    unsigned long populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

int main() {
    Carta carta1, carta2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos Carta 1
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000) / carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.pontosTuristicos + carta1.pibPerCapita + (1.0f / carta1.densidadePopulacional);

    printf("\n");

    // Entrada Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos Carta 2
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.pontosTuristicos + carta2.pibPerCapita + (1.0f / carta2.densidadePopulacional);

    // Exibir Carta 1
    printf("\n--- Informações da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta1.pibPerCapita);
    printf("Super Poder: %.2f\n", carta1.superPoder);

    // Exibir Carta 2
    printf("\n--- Informações da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per Capita: %.2f\n", carta2.pibPerCapita);
    printf("Super Poder: %.2f\n", carta2.superPoder);

    printf("\n");

    // Comparações — exibir 1 se cidade 1 venceu, 0 se cidade 2 venceu
    printf("Comparação dos atributos (1 = cidade 1 venceu, 0 = cidade 2 venceu):\n");

    printf("População: %d\n", (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Área: %d\n", (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: %d\n", (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);
    printf("Densidade Populacional (menor é melhor): %d\n", (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 0);
    printf("PIB per Capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);
    printf("Super Poder: %d\n", (carta1.superPoder > carta2.superPoder) ? 1 : 0);

    return 0;
}
