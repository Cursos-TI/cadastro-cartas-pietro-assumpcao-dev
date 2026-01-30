
#include <stdio.h>

int main()
{
    // Declaração de variáveis Carta 1
    char estados_1[30];
    char codigo_cartas_1[3];
    char nome_cidade_1[30];
    int populacao_1;
    float area_1;
    float pib_1;
    int numero_pontos_turisticos_1;

    // Declaração de variáveis Carta 2
    char estados_2[30];
    char codigo_cartas_2[3];
    char nome_cidade_2[30];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_pontos_turisticos_2;

    // Titulo do jogo
    printf(">>>>>>>>>> SUPER TRUNFO <<<<<<<<<<");

    // Entrada de dados Carta 1
    printf("\n - Carta 1:");

    printf("\nDigite uma letra de A a H para reperesentar o estado: ");
    scanf("%s", estados_1);

    printf("Digite o codigo da carta [Letra do Estado seguida de um numero de 01 a 04 'Ex: A01']: ");
    scanf("%s", codigo_cartas_1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_1);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao_1);

    printf("Digite a area da cidade em km quadrados: ");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_1);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos_1);

    // Entrada de dados Carta 2
    printf("\n - Carta 2:");

    printf("\nDigite uma letra de A a H para reperesentar o estado: ");
    scanf("%s", estados_2);

    printf("Digite o codigo da carta [Letra do Estado seguida de um numero de 01 a 04 'Ex: A01']: ");
    scanf("%s", codigo_cartas_2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade_2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &populacao_2);

    printf("Digite a area da cidade em km quadrados: ");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib_2);

    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &numero_pontos_turisticos_2);

    // Exibicao dos dados da carta 1
    printf("----- Carta 1 -----");
    printf("\n- Estado: %s", estados_1);
    printf("\n- Codigo da Carta: %s", codigo_cartas_1);
    printf("\n- Nome da Cidade: %s", nome_cidade_1);
    printf("\n- Populacao: %d", populacao_1);
    printf("\n- Area: %.2fkm2", area_1);
    printf("\n- PIB: %.2f bilhões de reais", pib_1);
    printf("\n- Numero de Pontos Turisticos: %d", numero_pontos_turisticos_1);

    // Exibicao dos dados da carta 2
    printf("\n\n----- Carta 2 -----");
    printf("\n- Estado: %s", estados_2);
    printf("\n- Codigo da Carta: %s", codigo_cartas_2);
    printf("\n- Nome da Cidade: %s", nome_cidade_2);
    printf("\n- Populacao: %d", populacao_2);
    printf("\n- Area: %.2fkm2", area_2);
    printf("\n- PIB: %.2f", pib_2);
    printf("\n- Numero de Pontos Turisticos: %d \n", numero_pontos_turisticos_2);

    return 0;   
}