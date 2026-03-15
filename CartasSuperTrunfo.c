#include <stdio.h>

    int main(){
    
        //declaração das variaveis para primeira carta
        char estado1[50], codigo1[10], cidade1[50];
        int turistico1;
        unsigned long int populacao1;
        float area1, pib1;
        
        //variaveis calculadas
        float densidade1, pibpercapita1;
        double superpoder1;


        //declaração das variaveis para segunda carta
        char estado2[50], codigo2[10], cidade2[50];
        unsigned long int populacao2;
        int turistico2;
        float area2, pib2;
        
        //variaveis calculadas
        float densidade2, pibpercapita2;
        double superpoder2;


        //cadastro da primeira carta
        printf("--- Bem vindo ao Super Trunfo ---\n\n");
        printf("--- CADASTRO DA PRIMEIRA CARTA ---\n\n");

        printf("Digite o Estado A - H: ");
        scanf("%s", estado1);

        printf("Código da Carta: ");
        scanf("%s", codigo1);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cidade1);

        printf("População: ");
        scanf("%lu", &populacao1);

        printf("Area em km²: ");
        scanf("%f", &area1);

        printf("O PIB: ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico1);
        
        printf("\n");

        densidade1 = (float)populacao1 / area1;
        pibpercapita1 = pib1 / populacao1;
        
        superpoder1 = populacao1 + turistico1 + pib1 + area1 + pibpercapita1 +(1 / densidade1);

        
        //cadastro da segunda carta
        printf("--- CADASTRO DA SEGUNDA CARTA ---\n\n");
    

        printf("Digite o Estado A - H: ");
        scanf("%s", estado2);

        printf("Código da Carta: ");
        scanf("%s", codigo2);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cidade2);

        printf("População: ");
        scanf("%lu", &populacao2);

        printf("Area em km²: ");
        scanf("%f", &area2);

        printf("O PIB: ");
        scanf("%f", &pib2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &turistico2);
        
        printf("\n");

        densidade2 = (float)populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        
        superpoder2 = populacao2 + turistico2 + pib2 + area2 + pibpercapita2 +(1 / densidade2);

        //exibição das cartas
        printf("\n--- CARTA 1 ---\n");

        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: %.2f Bilhões de Reais\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turistico1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", pibpercapita1);

        printf("\n--- CARTA 2 ---\n");

        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %lu\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: %.2f Bilhões de Reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", pibpercapita2);
        printf("\n\n");

        //comparação entre as cartas
        printf("=== Comparações entre as Cartas ===\n");
        printf("\nPopulação Carta 1 > Carta 2: %d\n", (populacao1 > populacao2));
        printf("Area Carta 1 > Carta 2: %d\n", (area1 > area2));
        printf("PIB Carta 1 > Carta 2: %d\n", (pib1 > pib2));
        printf("Pontos Turisticos Carta 1 > Carta 2: %d\n", (turistico1 > turistico2));
        printf("Densidade Populacional Carta 1 vence: %d\n", (densidade1 < densidade2));
        printf("PIB per capita Carta 1 > Carta 2: %d\n", (pibpercapita1 > pibpercapita2));
        printf("Super Poder Carta 1 > Carta 2: %d\n", (superpoder1 > superpoder2));

        return 0;


    }