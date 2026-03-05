#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Área para entrada de dados

  // Área para exibição dos dados da cidade

     //declaração das variaveis para primeira carta
        char estado1, codigo1[10], cidade1[30];
        int populacao1, turistico1;
        float area1, pib1;

        //declaração das variaveis para segunda carta
        char estado2, codigo2[10], cidade2[30];
        int populacao2, turistico2;
        float area2, pib2;


        //cadastro da primeira carta
        printf("--- Bem vindo ao Super Trunfo ---\n");
        printf("\n");
        printf("--- CADASTRO DA PRIMEIRA CARTA ---\n");
        printf("\n");

        printf("Digite o Estado A - H: ");
        scanf("%s", &estado1, "(\n)");

        printf("Código da Carta: ");
        scanf("%s", &codigo1, "(\n)");

        printf("Nome da Ciade: ");
        scanf("%s", &cidade1, "(\n)");

        printf("População: ");
        scanf("%d", &populacao1, "(\n)");

        printf("Area em km²: ");
        scanf("%f", &area1, "(\n)");

        printf("O PIB: ");
        scanf("%f", &pib1, "(\n)");

        printf("Número de Pontos Turísticos: ");
        scanf("%f", &turistico1, "(\n)");
        printf("\n");
        
        //cadastro da segunda carta
        printf("--- CADASTRO DA SEGUNDA CARTA ---\n");
        printf("\n");

        printf("Digite o Estado A - H: ");
        scanf("%s", &estado2, "(\n)");

        printf("Código da Carta: ");
        scanf("%s", &codigo2, "(\n)");

        printf("Nome da Ciade: ");
        scanf("%s", &cidade2, "(\n)");

        printf("População: ");
        scanf("%d", &populacao2, "(\n)");

        printf("Area em km²: ");
        scanf("%f", &area2, "(\n)");

        printf("O PIB: ");
        scanf("%f", &pib2, "(\n)");

        printf("Número de Pontos Turísticos: ");
        scanf("%f", &turistico2, "(\n)");
        printf("\n");

        //exibição das cartas
        printf("\n--- CARTA 1 ---\n");

        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f Km²\n", area1);
        printf("PIB: %f Bilhões de Reais\n", pib1);
        printf("Número de Pontos Turísticos: %f\n", turistico1);

return 0;
} 
