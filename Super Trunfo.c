//Trabalho da materia de programação em C

#include <stdio.h>

int main() {
    //declarar as variáveis
    char estado1;
    char codigo1[3];
    char cidade1[30]
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[30]
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //leitura dos dados - Cidade 1

    printf("==Cadastro da Carta 1==\n");
    
    printf("Digite uma letra para representar o estado: ");
    scanf(" %c", &estado1);

    printf("Digite um codigo para a cidade (2 digitos): ");
    scanf("%s", codigo1);

