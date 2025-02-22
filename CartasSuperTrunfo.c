#include <stdio.h>

int main(){
    char carta, carta1, codigoCarta[10], codigoCarta1[10], nomeCidade[50], nomeCidade1[50];
    int populacao, populacao1, nPontosTuristicos, nPontosTuristicos1;
    float area, area1, pib, pib1;

    printf("Indique um Estado (use letras entre A e H para representar): \n");
    scanf(" %c", &carta);
    printf("Dê um código para a carta (use a letra escolhida seguida de um número): \n");
    scanf("%s", &codigoCarta);
    printf("Informe o nome da Cidade correspondente ao Estado: \n");
    scanf("%s", nomeCidade);
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao);
    printf("Informe a área da cidade (em Km²): \n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &nPontosTuristicos);

    printf("Indique um Estado (use letras entre A e H para representar): \n");
    scanf(" %c", &carta1);
    printf("Dê um código para a carta (use a letra escolhida seguida de um número): \n");
    scanf("%s", &codigoCarta1);
    printf("Informe o nome da Cidade correspondente ao Estado: \n");
    scanf("%s", nomeCidade1);
    printf("Informe a população da cidade: \n");
    scanf("%d", &populacao1);
    printf("Informe a área da cidade (em Km²): \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: \n");
    scanf("%d", &nPontosTuristicos1);

    printf("CARTA 1 \n");
    printf("Estado: %c \n", carta);
    printf("Código: %s \n", codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %f Km² \n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", nPontosTuristicos);

    printf("CARTA 2 \n");
    printf("Estado: %c \n", carta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km² \n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", nPontosTuristicos1);

    return 0;
}