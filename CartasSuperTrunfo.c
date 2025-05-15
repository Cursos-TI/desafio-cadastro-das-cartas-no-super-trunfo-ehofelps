#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[1], estado2[1];
    char codigo1[3], codigo2[3], cidade1[50], cidade2[50];
    int populacao1, populacao2, pturistico1, pturistico2;
    float area1, area2, pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Cadastro da primeira carta

    printf("***CADASTRO DA PRIMEIRA CARTA***\n");
    printf("Digite o Estado da Carta: \n");
    scanf("%s", &estado1);
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo1);
    printf("Digite a Cidade da Carta: \n");
    scanf("%s", &cidade1);
    printf("Digite a População da Carta: \n");
    scanf("%d", &populacao1);
    printf("Digite a Área da Carta: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta: \n");
    scanf("%f", &pib1);
    printf("Digite o número de Pontos Turísticos da Carta: \n");
    scanf("%d", &pturistico1);

    //Cadastro da segunda carta

    printf("***CADASTRO DA SEGUNDA CARTA***\n");
    printf("Digite o Estado da Carta: \n");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo2);
    printf("Digite a Cidade da Carta: \n");
    scanf("%s", &cidade2);
    printf("Digite a População da Carta: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área da Carta: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta: \n");
    scanf("%f", &pib2);
    printf("Digite o número de Pontos Turísticos da Carta: \n");
    scanf("%d", &pturistico2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //CARTA 1

    printf("Carta 1: \n");
    printf("Estado: %s \n ", estado1);
    printf("Código: %s \n ", codigo1);
    printf("Cidade: %s \n ", cidade1);
    printf("População: %d \n ", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f  Bilhões de reais \n", pib1);
    printf("Números de Pontos Túristicos: %d \n ", pturistico1);

    //CARTA 2

    printf("Carta 2: \n");
    printf("Estado: %s \n ", estado2);
    printf("Código: %s \n ", codigo2);
    printf("Cidade: %s \n ", cidade2);
    printf("População: %d \n ", populacao2);
    printf("Área: %.2f km² \n ", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Números de Pontos Túristicos: %d \n ", pturistico2);


    return 0;
}
