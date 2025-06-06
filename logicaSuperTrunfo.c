#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados da carta
struct Carta {
    char estado[50];
    char codigo[10];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    // Cadastro das duas cartas
    struct Carta carta1 = {
        "SP", "001", "São Paulo",
        12300000, 1521.11, 2300000.0, 15, 0, 0
    };

    struct Carta carta2 = {
        "RJ", "002", "Rio de Janeiro",
        6710000, 1182.30, 1500000.0, 10, 0, 0
    };

    // Cálculo da densidade populacional e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Escolha do atributo de comparação (fixo: População neste exemplo)
    printf("Comparação de cartas (Atributo: População)\n\n");

    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Lógica de comparação com if / if-else
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate! Ambas as cidades têm a mesma população.\n");
    }

    return 0;
}

