#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        char    estado1;
        char    codcarta1[10];
        char    nomecidade1[20];
        int     populacao1;
        float   area1;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("Carta 1: \n");
        printf("Digite o Estado: ");
        scanf("%c", &estado1);
        printf("Digite o código da carta: ");
        scanf("%s", &codcarta1);
        printf("Digite o nome da cidade: ");
        scanf("%s", &nomecidade1);
        print("Digite a população da cidade: ");
        scanf("%d", &populacao1);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
