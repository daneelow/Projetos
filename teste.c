#include <stdio.h>

int main () {

    char nome[100];   // Array maior para suportar nomes longos
    int idade;

    printf("Digite seu nome completo: ");
    scanf(" %[^\n]", nome);   // Lê até encontrar ENTER (inclui espaços)

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Olá, %s! Você tem %d anos.\n", nome, idade);

    return 0;
}
