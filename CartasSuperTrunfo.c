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
printf("nome:"); //mensagem para o usuario
scanf("%s",&nome1); // ler o nome da cidade1

printf("estado:");
scanf("%s", &estado1); //ler o estado da cidade1

printf("codigo:");
scanf("%d", &codigo1); //ler o codigo da cidade 1

printf("populacao:");
scanf("%d", &populacao1); // ler a populaçao da cidade 1

printf("area(em km²):");
scanf("%f",&area1); // ler a area da cidade 1

printf("PIB (em bilhoes):"); 
scanf("%f", &pib1); // ler o pib da cdade 1

printf("pontos turisticos:");
scanf("%d", &pontosturisticos1); // ler os pontos turisticos da cidade 1

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
printf("nome: %s\n",nome1); // mostra o nome 
printf("estado: %s\n", estado1);
printf("codigo: %d\n", codigo1);
printf("populaçao: %d\n", populacao1);
printf("area:%.2f em km²\n", area1);
printf("PIB: R$ %.2f bilhoes\n", pib1);
printf("pontos turisticos:%d\n", pontosturisticos1);

// Carta 2 -- cidade 2
printf("\n--- carta cidade 2---\n");
printf("nome: %s\n",nome2); // mostra o nome
printf("estado: %s\n", estado2);
printf("codigo: %d\n", codigo2);
printf("populaçao: %d\n", populacao2);
printf("area:%.2f em km²\n", area2);
printf("PIB: R$ %.2f bilhoes\n", pib2);
printf("pontos turisticos:%d\n", pontosturisticos2);
 


    return 0;
}