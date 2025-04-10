#include <stdio.h> //inclusao da biblioteca padrao de entrada e saida

// desafio super trunfo- Cidades
// Este programa cadastra  duas cartas de cidades no estilo do jogo super trunfo
// Cada carta contem diversas informaçoes

int main() {
// Declaraçao das variaveis

// variaveis para a primeira carta (cidade 1)
int codigo1,populacao1, pontosturisticos1;
char nome1[40], estado1 [30];
float area1, pib1;

// Variaveis para a segunda carta (cidade 2)  
int codigo2, populacao2, pontosturisticos2; 
char nome2 [40], estado2 [30];
float area2, pib2;


// Entrada de dados cidade 1
// Cadastro da carta 1
printf("digite os dados da cidade 1:\n");
printf("nome:"); //Solicita ao usuário o nome da cidade1
scanf("%s",&nome1); //  Armazena o nome da cidade1 digitado pelo usuário

printf("estado:");  // Solicita ao usuario o estado da cidade1
scanf("%s", &estado1); // Armazena o estado da cidade1 digitado pelo usauario

printf("codigo:");  // Solicita ao usuario o codigo da cidade1
scanf("%d", &codigo1); // Armazena o codigo da cidade1 digitado pelo usauario

printf("populacao:");  // Solicita ao usuario a populaçao da cidade1
scanf("%d", &populacao1);  // Armazena a populaçao da cidade1 digitada pelo usauario

printf("area(em km²):"); // Solicita ao usuario a area da cidade1
scanf("%f",&area1); // Armazena a aréa da cidade1 digitada pelo usuario

printf("PIB (em bilhoes):");  // Solicita ao usuario o PIB da cidade1
scanf("%f", &pib1); // Armazena o PIB da cidade1 digitado pelo usuario

printf("pontos turisticos:"); // Solicita ao usuario os pontos turisticos da cidade1
scanf("%d", &pontosturisticos1); // Armazena os pontos turisticos da cidade1 digitada pelo usuario

// Entrada de dados cidade 2
// Cadastro da carta 2
printf("\ndigite os dados da cidade 2:\n");
printf("nome:");
scanf("%s", &nome2);

printf("estado:");
scanf("%s", &estado2);

printf("codigo:");
scanf("%d", &codigo2);

printf("populacao:");
scanf("%d", &populacao2);

printf("area(em km²):");
scanf("%f", &area2);

printf("PIB(em bilhoes):");
scanf("%f", &pib2);

printf("pontos turisticos:");
scanf("%d",&pontosturisticos2);

// EXIBIÇAO DAS CARTAS - cidade 1 cidade 2

// Carta 1 -- cidade 1
printf("\n--- carta cidade 1---\n");
printf("nome: %s\n",nome1); // exibir na tela o nome da cidade 1 digitada pelo usuario
printf("estado: %s\n", estado1); // exibir na tela o estado da cidade 1 digitada pelo usuario
printf("codigo: %d\n", codigo1); // exibir na tela o codigo da cidade 1 digitada pelo usuario
printf("populaçao: %d\n", populacao1); // exibir na tela a populaçao da cidade 1 digitada pelo usuario
printf("area:%.2f em km²\n", area1); // exibir na tela a aréa da cidade 1 digitada pelo usuario
printf("PIB: R$ %.2f bilhoes\n", pib1); // exibir na tela o PIB da cidade 1 digitada pelo usuario
printf("pontos turisticos:%d\n", pontosturisticos1); // exibir na tela os pontos turisticos da cidade 1 digitados pelo usuario

// Carta 2 -- cidade 2
printf("\n--- carta cidade 2---\n");
printf("nome: %s\n",nome2); 
printf("estado: %s\n", estado2);
printf("codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area:%.2f em km²\n", area2);
printf("PIB: R$ %.2f bilhoes\n", pib2);
printf("pontos turisticos:%d\n", pontosturisticos2);
 


    return 0; // Indica que o programa foi executado com sucesso
    
}