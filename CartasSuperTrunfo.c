#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
 //variáveis da primeira carta
    int carta1 = 1;
    char estado1;
    char codigo1[3];
    char cidade1[20];
    int populacao1, turismo1;
    float area1, pib1;

//variáveis da segunda carta
    int carta2 = 2;
    char estado2;
    char codigo2[3];
    char cidade2[20];
    int populacao2, turismo2;
    float area2, pib2;

  // Área para entrada de dados
//informações da primeira carta    
    printf("Digite os dados da carta %d: \n", carta1);
    printf("Digite o estado: \n");
    scanf(" %c", &estado1);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade1);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao1);
    printf("Digite a area em quilometros quadrados: \n");
    scanf("%f", &area1);
    printf("Digite o Produto Interno Bruto: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo1);

//informações da segunda carta    
    printf("Digite os dados da carta %d: \n", carta2);
    printf("Digite o estado: \n");
    scanf(" %c", &estado2);
    printf("Digite a cidade: \n");
    scanf("%s", &cidade2);
    printf("Digite o numero de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a area em quilometros quadrados: \n");
    scanf("%f", &area2);
    printf("Digite o Produto Interno Bruto: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo2);
  // Área para exibição dos dados da cidade
//exibir informações da carta1
    printf("Carta %d: \n", carta1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c0%d\n", estado1, carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    
//exibir informações da carta2
    printf("Carta %d: \n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %c0%d\n", estado2, carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

return 0;
} 
