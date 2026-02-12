#include <stdio.h>

void main(){
    char estado_1, estado_2;
    char nome_cdd_1[50], nome_cdd_2[50];
    char codigo_1[10], codigo_2[10];
    int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_tur_1, pontos_tur_2;
    
    /*Criando a primeira carta.*/

    printf("Sejá bem vindo ao sistema de criação de cartas do jogo Triunfo de cidade.\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cdd_1);

    printf("Digite agora o estado (Ex: A): ");
    scanf(" %c", &estado_1);

    printf("Digite o codigo da carta (Ex: 03): ");
    scanf(" %s", codigo_1);

    printf("Digite a população da cidade (Ex: 50000): ");
    scanf(" %i", &populacao_1);

    printf("Digite a área da cidade (Ex: 1521.50): ");
    scanf(" %f", &area_1);

    printf("Digite o PIB (Ex: 400.30): ");
    scanf(" %f", &pib_1);

    printf("Digite o número de pontos turísticos (Ex: 4): ");
    scanf(" %i", &pontos_tur_1);

    /*Criação da 2 carta*/

    printf("\nAgora vamos criar a segunda carta.\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cdd_2);

    printf("Digite agora o estado (Ex: B): ");
    scanf(" %c", &estado_2);

    printf("Digite o codigo da carta (Ex: 01): ");
    scanf(" %s", codigo_2);

    printf("Digite a população da cidade (Ex: 48000): ");
    scanf(" %i", &populacao_2);

    printf("Digite a área da cidade (Ex: 2002.65): ");
    scanf(" %f", &area_2);

    printf("Digite o PIB (Ex: 740.80): ");
    scanf(" %f", &pib_2);

    printf("Digite o número de pontos turísticos (Ex: 9): ");
    scanf(" %i", &pontos_tur_2);

    /*Exibindo as cartas criadas.*/
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código da carta: %c%s\n", estado_1, codigo_1);
    printf("Nome da cidade: %s\n", nome_cdd_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Número de pontos turísticos: %i\n", pontos_tur_1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código da carta: %c%s\n", estado_2, codigo_2);
    printf("Nome da cidade: %s\n", nome_cdd_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Número de pontos turísticos: %i\n", pontos_tur_2);

}