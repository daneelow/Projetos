//Trabalho da materia de programação em C

#include <stdio.h>

int main() {
    //declarar as variáveis
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontosTuristicos2;

    // definindo as variáveis para cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    //leitura das variáveis - Carta 1

    printf("==Cadastro da Carta 1==\n");
    printf(" \n");
    
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

    printf("Digite o PIB em bilhões de reais (apenas números): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // leitura das variáveis - Carta 2
    
    printf(" \n");
    printf("== Cadastro da Carta 2 ==\n");
    printf(" \n");

    printf("Digite uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (letra do estado + dois dígitos, ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a populacao (apenas números): ");
    scanf("%d", &populacao2);

    printf("Digite a area em km² (apenas números): ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais (apenas números): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // efetuar os cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // foi necessario convrter bilhões para reais
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0) + (float)pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + (float)pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Imprimindo as informações das cartas
    
    printf(" \n");
    printf("===== CARTA 1 =====\n");
    printf(" \n");
    printf("== Estado: %c\n", estado1);
    printf("== Codigo: %s\n", codigo1);
    printf("== Nome da Cidade: %s\n", cidade1);
    printf("== Populacao: %d habitantes\n", populacao1);
    printf("== Area: %.2f km²\n", area1);
    printf("== PIB: %.2f bilhoes de reais\n", pib1);
    printf("== Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("== Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("== PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("== SUPER PODER: %.2f \n", superPoder1);

    printf(" \n");
    printf("===== CARTA 2 =====\n");
    printf(" \n");
    printf("== Estado: %c\n", estado2);
    printf("== Codigo: %s\n", codigo2);
    printf("== Nome da Cidade: %s\n", cidade2);
    printf("== Populacao: %d habitantes\n", populacao2);
    printf("== Area: %.2f km²\n", area2);
    printf("== PIB: %.2f bilhoes de reais\n", pib2);
    printf("== Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("== Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("== PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("== SUPER PODER: %.2f \n", superPoder2);

    printf("===========================================\n");
    printf("COMPRARAÇÃO ESCOLHIDA: PIB PER CAPITA\n");
    printf("===========================================\n");

    printf("\n====== RESULTADO DA COMPARAÇÃO ======\n");
    printf("Comparação de cartas (Atributo: PIB per Capita)\n\n");

    printf("Carta 1 - %s (%c): %.2f reais por habitante\n", cidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): %.2f reais por habitante\n", cidade2, estado2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

   
    return 0;
}
