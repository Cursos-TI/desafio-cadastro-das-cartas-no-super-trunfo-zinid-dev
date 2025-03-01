#include <stdio.h>

int main(){
    //Declaração das variáveis
    char estado[3], estado1[3], codigoCarta[10], codigoCarta1[10], nomeCidade[50], nomeCidade1[50];
    int nPontosTuristicos, nPontosTuristicos1;
    float area, area1, pib, pib1, densidade, densidade1, pibpc, pibpc1, superPoder, superPoder1;
    unsigned int populacao, populacao1;

    //Inserção dos dados da Carta01
    printf("Indique um Estado (use letras entre A e H para representar): \n");
    scanf(" %2s", estado);
    getchar(); //Limpar Buffer
    printf("Dê um código para a carta (use a letra escolhida seguida de um número): \n");
    scanf("%9s", codigoCarta);
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

    //Inserção dos dados da Carta02
    printf("Indique um Estado (use letras entre A e H para representar): \n");
    scanf(" %2s", estado1);
    printf("Dê um código para a carta (use a letra escolhida seguida de um número): \n");
    scanf("%9s", codigoCarta1);
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

    //Cálculo das densidades e PIB per capita de ambas as cartas
    densidade = (float) populacao / area;
    densidade1 = (float) populacao1 / area1;
    pibpc = (float) pib / populacao;
    pibpc1 = (float) pib1 / populacao1;

    //Cálculo SuperPoderCarta01
    superPoder = (float) populacao + area + pib + nPontosTuristicos + densidade + pibpc;
    superPoder1 = (float) populacao1 + area1 + pib1 + nPontosTuristicos1 + densidade1 + pibpc1;

    //Exibição dos dados cadastrados para a Carta01
    printf("CARTA 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d \n", nPontosTuristicos);
    printf("Densidade Populacional: %.2f kab/Km² \n", densidade);
    printf("PIB per Capita: %.2f reais \n", pibpc);
    printf("Super Poder: %.2f \n\n", superPoder);

    //Exibição dos dados cadastrados para a Carta02
    printf("CARTA 2 \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f kab/Km² \n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibpc1);
    printf("Super Poder: %.2f \n\n", superPoder1);

    //Comparação das cartas
    /*int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPTuristicos, resultadoDensidade, resultadoPibPC, resultadoPoder;
    
    resultadoPopulacao = populacao > populacao1;
    resultadoArea = area > area1;
    resultadoPib = pib > pib1;
    resultadoPTuristicos = nPontosTuristicos > nPontosTuristicos1;
    resultadoDensidade = densidade < densidade1;
    resultadoPibPC = pibpc > pibpc1;
    resultadoPoder = superPoder > superPoder1;

    //Exibição dos resultados
    printf("População: %s\n", resultadoPopulacao ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área: %s\n", resultadoArea ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", resultadoPib ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turísticos: %s\n", resultadoPTuristicos ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %s\n", resultadoDensidade ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %s\n", resultadoPibPC ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", resultadoPoder ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");*/

    //Compara de um único atributo (usando if-else)
    printf("COMPARAÇÃO DE CARTAS (Atributo: Pontos Turísticos)\n");
    printf("Carta 1 - %s (%c): %d \n", nomeCidade, estado, nPontosTuristicos);
    printf("Carta 2 - %s (%c): %d \n", nomeCidade1, estado1, nPontosTuristicos1);
    if (nPontosTuristicos > nPontosTuristicos1) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade1);
    }
    

    return 0;
}