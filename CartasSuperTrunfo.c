#include 

typedef struct {
    char estado;          
    char codigo[5];      
    char nomeCidade[50]; 
    int populacao;       
    float area;          
    float pib;           
    int pontosTuristicos; 
} Carta;

void exibirCarta(Carta carta) {
    printf("Informações da Carta:\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área (em km²): %.2f\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("\n");
}

int main() {
    Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("Insira os dados da carta %d:\n", i + 1);
        
        printf("Estado:rio de janeiro");
        scanf(" %c", &cartas[i].estado);
        
        printf("codigo da carta: A01");
        scanf("%s", cartas[i].codigo);
        
        printf("nome da cidade: rio de janeiro");
        scanf(" %[^\n]", cartas[i].nomeCidade); // Lê até a nova linha
        
        printf("População: 345325631 ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Área (em km²): 752673632 ");
        scanf("%f", &cartas[i].area);
        
        printf("PIB: 1735075038500 ");
        scanf("%f", &cartas[i].pib);
        
        printf("Número de Pontos Turísticos:30 ");
        scanf("%d", &cartas[i].pontosTuristicos);
        
        printf("\n");
    }
    for (int i = 0; i < 2; i++) {
        printf("Insira os dados da carta %d:\n", i + 1);
        
        printf("Estado (A-H): japão ");
        scanf(" %c", &cartas[i].estado);
        
        printf("Código da Carta: A02 ");
        scanf("%s", cartas[i].codigo);
        
        printf("Nome da Cidade: tokyo  ");
        scanf(" %[^\n]", cartas[i].nomeCidade); // Lê até a nova linha
        
        printf("População: 164264087 ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Área (em km²): 925364062 ");
        scanf("%f", &cartas[i].area);
        
        printf("PIB: 1629745279462 ");
        scanf("%f", &cartas[i].pib);
        
        printf("Número de Pontos Turísticos:25 ");
        scanf("%d", &cartas[i].pontosTuristicos);
        
        }
    
        return 0;
    }