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
    double superPoder;  // Alterado para double
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

    // Cálculos Carta 1 com tratamento de divisão por zero
    if (carta1.area > 0.0f) {
        carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidadePopulacional = 0.0f;
        printf("⚠️ Atenção: Área da cidade 1 é zero! Densidade Populacional definida como 0.\n");
    }

    if (carta1.populacao > 0) {
        carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;
    } else {
        carta1.pibPerCapita = 0.0f;
        printf("⚠️ Atenção: População da cidade 1 é zero! PIB per Capita definido como 0.\n");
    }

    double inverso_densidade1 = 0.0;
    if (carta1.densidadePopulacional > 0.0f) {
        inverso_densidade1 = 1.0 / carta1.densidadePopulacional;
    }

    carta1.superPoder = (double)carta1.populacao + (double)carta1.area + (double)carta1.pib +
                        (double)carta1.pontosTuristicos + (double)carta1.pibPerCapita + inverso_densidade1;

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

    // Cálculos Carta 2 com tratamento de divisão por zero
    if (carta2.area > 0.0f) {
        carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidadePopulacional = 0.0f;
        printf("⚠️ Atenção: Área da cidade 2 é zero! Densidade Populacional definida como 0.\n");
    }

    if (carta2.populacao > 0) {
        carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;
    } else {
        carta2.pibPerCapita = 0.0f;
        printf("⚠️ Atenção: População da cidade 2 é zero! PIB per Capita definido como 0.\n");
    }

    double inverso_densidade2 = 0.0;
    if (carta2.densidadePopulacional > 0.0f) {
        inverso_densidade2 = 1.0 / carta2.densidadePopulacional;
    }

    carta2.superPoder = (double)carta2.populacao + (double)carta2.area + (double)carta2.pib +
                        (double)carta2.pontosTuristicos + (double)carta2.pibPerCapita + inverso_densidade2;

    // Exibição da Carta 1
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

    // Exibição da Carta 2
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

    // Comparações
    printf("\nComparação dos atributos (1 = cidade 1 venceu, 0 = cidade 2 venceu):\n");
    printf("População: %d\n", (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Área: %d\n", (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: %d\n", (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turísticos: %d\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);
    printf("Densidade Populacional (menor é melhor): %d\n", (carta1.densidadePopulacional < carta2.densidadePopulacional) ? 1 : 0);
    printf("PIB per Capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);
    printf("Super Poder: %d\n", (carta1.superPoder > carta2.superPoder) ? 1 : 0);

    return 0;
}
