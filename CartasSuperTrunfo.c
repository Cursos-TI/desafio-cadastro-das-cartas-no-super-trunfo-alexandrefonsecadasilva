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

    printf("\n");

    // Comparações — imprimir nome da cidade vencedora
    printf("Comparação dos atributos:\n");

    printf("População: %s\n", (carta1.populacao > carta2.populacao) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("Área: %s\n", (carta1.area > carta2.area) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("PIB: %s\n", (carta1.pib > carta2.pib) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("Pontos Turísticos: %s\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("Densidade Populacional: %s\n", (carta1.densidadePopulacional < carta2.densidadePopulacional) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("PIB per Capita: %s\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? carta1.nomeCidade : carta2.nomeCidade);
    printf("Super Poder: %s\n", (carta1.superPoder > carta2.superPoder) ? carta1.nomeCidade : carta2.nomeCidade);

    return 0;
}
