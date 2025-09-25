//Trabalho da materia de programação em C

#include <stdio.h>

int main() {
    //declarar as variáveis
    char estado1;
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[30];
    int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;

    //leitura das variáveis - Carta 1

    printf("==Cadastro da Carta 1==\n");
    
    printf("Digite uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (letra do estado + dois dígitos, ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a populacao (apenas números): ");
    scanf("%d", &populacao1);

    printf("Digite a area em km² (apenas números): ");
    scanf("%f", &area1);

    printf("Digite o PIB em milhões de reais (apenas números): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // leitura das variáveis - Carta 2
    
    printf("== Cadastro da Carta 2 ==\n");

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta (letra do estado + dois dígitos, ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao (apenas números): ");
    scanf("%d", &populacao2);

    printf("Digite a area em km² (apenas números): ");
    scanf("%f", &area2);

    printf("Digite o PIB em milhões de reais (apenas números): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Imprimindo as informações das cartas
    
    printf(" \n");
    printf("===== CARTA 1 =====\n");
    printf("==Estado: %c\n", estado1);
    printf("==Codigo: %s\n", codigo1);
    printf("==Nome da Cidade: %s\n", cidade1);
    printf("==Populacao: %d habitantes\n", populacao1);
    printf("==Area: %.2f km²\n", area1);
    printf("==PIB: %.2f bilhoes de reais\n", pib1);
    printf("==Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf(" \n");
    printf("===== CARTA 2 =====\n");
    printf("== Estado: %c\n", estado2);
    printf("== Codigo: %s\n", codigo2);
    printf("== Nome da Cidade: %s\n", cidade2);
    printf("== Populacao: %d habitantes\n", populacao2);
    printf("== Area: %.2f km²\n", area2);
    printf("== PIB: %.2f milhoes de reais\n", pib2);
    printf("== Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
