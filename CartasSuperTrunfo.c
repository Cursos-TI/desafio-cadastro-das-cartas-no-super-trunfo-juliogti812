#include <stdio.h>

// Estrutura para armazenar os dados de uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para capturar os dados de uma carta
void lerCarta(Carta *carta, int numero) {
    printf("\nInforme os dados da Carta %d:\n", numero);
    
    printf("Estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Código da Carta (ex: A01): ");
    scanf(" %s", carta->codigo);
    
    printf("Nome da Cidade: ");
    scanf(" %[^"]s", carta->nomeCidade); // Lê a string incluindo espaços
    
    printf("População: ");
    scanf(" %d", &carta->populacao);
    
    printf("Área (em km²): ");
    scanf(" %f", &carta->area);
    
    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &carta->pib);
    
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &carta->pontosTuristicos);
    
    // Cálculos
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1000000000) / carta->populacao;
}

// Função para exibir os dados de uma carta
void exibirCarta(Carta carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
}

int main() {
    Carta carta1, carta2;
    
    // Captura os dados das duas cartas
    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);
    
    // Exibe os dados cadastrados
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);
    
    return 0;
}
