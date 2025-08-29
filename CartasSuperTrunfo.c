#include <stdio.h>
    int main(){

//Variáveis da primeira carta:
        char estado1;
        char codigo1[10];
        char nomecidade1[30];
        int populacao1;
        float area1;
        float pib1;
        int pontosturisticos1;

//Variáveis da segunda carta:
        char estado2;
        char codigo2[10];
        char nomecidade2[30];
        int populacao2;
        float area2;
        float pib2;
        int pontosturisticos2;

//Dados da primeira carta:
        printf("----------Dados da carta 1----------\n");
        printf("Digite uma letra de 'A' a 'H' para o estado:\n");
        scanf("%c", &estado1);
        printf("Digite qual é o código da carta:\n");
        scanf("%s", &codigo1);
        printf("Digite o nome da cidade:\n");
        scanf("%s", &nomecidade1);
        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao1);
        printf("Digite a área (em kms²) da cidade:\n");
        scanf("%f", &area1);
        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib1);
        printf("Digite a quantidade de pontos turisticos da cidade:\n");
        scanf("%d", &pontosturisticos1);
//Dados da segunda carta:        
        printf("----------Dados da carta 2----------\n");
        printf("Digite uma letra de 'A' a 'H' para o estado:\n");
        scanf("%c", &estado2);
        printf("Digite qual é o código da carta:\n");
        scanf("%s", &codigo2);
        printf("Digite o nome da cidade:\n");
        scanf("%s", &nomecidade2);
        printf("Digite a população da cidade:\n");
        scanf("%d", &populacao2);
        printf("Digite a área (em kms²) da cidade:\n");
        scanf("%f", &area2);
        printf("Digite o PIB da cidade:\n");
        scanf("%f", &pib2);
        printf("Digite a quantidade de pontos turisticos da cidade:\n");
        scanf("%d", &pontosturisticos2);
        printf("\n");
//Impressão dos dados
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nomecidade1);
        printf("População da cidade: %d\n", populacao1);
        printf("Área(kms²): %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Quantidade de pontos turisticos: %d\n", pontosturisticos1);









    }
