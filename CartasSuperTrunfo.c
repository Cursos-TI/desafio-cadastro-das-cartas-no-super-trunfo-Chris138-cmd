#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
     char Estado;
    char Codigo[4];
    char Cidade[50];
    int Populacao;
    float Pib;
    float Area;

    char Estado2;
    char Codigo2[4];
    char Cidade2[50];
    int Populacao2;
    float Pib2;
    float Area2;

    printf(" Informe os Dados da Carta 01;\n");
    
    printf("Estado (Entre A e H):");
    scanf(" %c", &Estado);

    printf("Informe um Codigo para a Carta:");
    scanf(" %s", Codigo);

    printf("Informe a Cidade:");
    scanf(" %s", Cidade);

    printf("Informe a População:");
    scanf(" %d", &Populacao);
        
    printf("Informe o Pib:");
    scanf(" %f", &Pib);

    printf("Informe a Area:");
    scanf(" %f", &Area);
    
printf(" Informe os Dados da Carta 02;\n");
    
    printf("Estado (Entre A e H):");
    scanf(" %c", &Estado2);

    printf("Informe um Codigo para a Carta:");
    scanf(" %s", Codigo2);

    printf("Informe a Cidade:");
    scanf(" %s", Cidade2);

    printf("Informe a População:");
    scanf(" %d", &Populacao2);
        
    printf("Informe o Pib:");
    scanf(" %f", &Pib2);

    printf("Informe a Area:");
    scanf(" %f", &Area2);

    printf("\n------------------------------\n");
    printf("-------- Carta 01 -----------\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("PIB: %.2f\n", Pib);
    printf("Área: %.2f km²\n", Area);
    printf("------------------------------\n");


    printf("\n------------------------------\n");
    printf("-------- Carta 02 -----------\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("PIB: %.2f\n", Pib2);
    printf("Área: %.2f km²\n", Area2);
    printf("------------------------------\n");

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
