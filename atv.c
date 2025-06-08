#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    int atributo1;
    float soma1;
    float valor1A;
    float valor2A;


    char nomeA[30], nomeB[30];
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    int atributo2;
    float soma2;
    float valor1B;
    float valor2B;

    printf("Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nCarta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção (1-5): ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Reinicie o programa.\n");
        return 1;
    }

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção (1-5): ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 5) {
        printf("Opção inválida! Reinicie o programa.\n");
        return 1;
    }

    if (atributo2 == atributo1) {
        printf("Segundo atributo igual ao primeiro! Reinicie o programa e escolha atributos diferentes.\n");
        return 1;
    }

    switch(atributo1) {
        case 1: 
            valor1A = populacao1; valor1B = populacao2; 
            sprintf(nomeA, "População"); 
            
            break;
        case 2: 
            valor1A = area1; valor1B = area2; 
            sprintf(nomeA, "Área"); 
            
            break;
        case 3: 
            valor1A = pib1; valor1B = pib2; 
            sprintf(nomeA, "PIB"); 
            
            break;
        case 4: 
            valor1A = pontosTuristicos1; valor1B = pontosTuristicos2; 
            sprintf(nomeA, "Número de Pontos Turísticos"); 
            
            break;
        case 5: 
            valor1A = densidade1; valor1B = densidade2; 
            sprintf(nomeA, "Densidade Demográfica"); 
            
            break;
    }

    switch(atributo2) {
        case 1: 
            valor2A = populacao1; valor2B = populacao2; 
            sprintf(nomeB, "População"); 
            
            break;
        case 2: 
            valor2A = area1; valor2B = area2; 
            sprintf(nomeB, "Área"); 
            
            break;
        case 3: 
            valor2A = pib1; valor2B = pib2; 
            sprintf(nomeB, "PIB"); 
            
            break;
        case 4: 
            valor2A = pontosTuristicos1; valor2B = pontosTuristicos2; 
            sprintf(nomeB, "Número de Pontos Turísticos"); 
            
            break;
        case 5: 
            valor2A = densidade1; valor2B = densidade2; 
            sprintf(nomeB, "Densidade Demográfica"); 
            
            break;
    }

    printf("\nComparação entre %s e %s\n", nomeCidade1, nomeCidade2);
    printf("Atributos escolhidos: %s e %s\n\n", nomeA, nomeB);

    printf("%s - %s: %.2f\n", nomeCidade1, nomeA, valor1A);
    printf("%s - %s: %.2f\n", nomeCidade2, nomeA, valor1B);

    printf("%s - %s: %.2f\n", nomeCidade1, nomeB, valor2A);
    printf("%s - %s: %.2f\n", nomeCidade2, nomeB, valor2B);

    soma1 = valor1A + valor2A;
    soma2 = valor1B + valor2B;

    printf("\nSoma dos atributos para %s: %.2f\n", nomeCidade1, soma1);
    printf("Soma dos atributos para %s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}
